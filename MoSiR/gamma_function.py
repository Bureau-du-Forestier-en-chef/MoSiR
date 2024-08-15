# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
from scipy.stats import gamma
from scipy.optimize import minimize_scalar
from MoSiR import mosir_exceptions as me

class DecayTypeOptimizer:
    def __init__(self, node_name, decay_type, value):
        self.node_name = node_name
        self.decay_type = decay_type
        self.value = value
        if self.decay_type == "Exponential":
            self.alpha = 1
        elif self.decay_type == "Gamma":
            self.beta = 1
        elif self.decay_type == "Chi-square":
            self.beta = 2
        self.opt_failed = f"L'optimisation du noeud de dégradation \
            {self.node_name} avec un temps de demi-vie de {self.value} \
            a échoué. Veuillez utiliser le fichier Excel pour calculer \
            manuellement le alpha et beta et l'inscrire comme dégration \
            'Custom'. Le fichier est sous MoSiR/gamma_distribution/gamma_decay.xlsx"
        
    def objective(self, param: float) -> float:
        """Set up param à optimiser tout dépendant ce qu'on recherche
        Param is unknow

        Args:
            param (_type_): Alpha or beta (float)

        Returns:
            float: _description_
        """
        if hasattr(self, 'alpha') and hasattr(self, 'beta'):
            raise me.DecayError(f"Optimization of {self.node_name} decay \
                values when alpha and beta are already present")
        if hasattr(self, 'alpha'):
            cdf_value = gamma.cdf(self.value, self.alpha, scale=param)
        elif hasattr(self, 'beta'):
            cdf_value = gamma.cdf(self.value, param, scale=self.beta)
        return abs(cdf_value - 0.5)

    def find_param(self) -> tuple[float, float]:
        """Permet d'optimiser la valeur manquante
        Avec des hautes valeurs, l'optimisateur a de la difficulté à
        trouver la réponse. Il faut donc pointer un intervalle de possibilités
        avec bounds.  

        Raises:
            me.DecayError: Advenant que l'optimisation échoue

        Returns:
            tuple[float, float]: Combinaison alpha, beta
        """
        if self.decay_type == "Exponential":
            bounds = (self.value * 0.5, self.value * 2)
        elif self.decay_type == "Gamma":
            bounds = (self.value * 0.5, self.value * 1.5)
        elif self.decay_type == "Chi-square":
            bounds = (self.value * 0.25, self.value * 0.9)
        result = minimize_scalar(self.objective, bounds=bounds)
        if result.success == False:
            raise me.DecayError(self.opt_failed)
        if hasattr(self, 'alpha'):
            alpha_value = self.alpha
            beta_value = result.x
        elif hasattr(self, 'beta'):
            alpha_value = result.x
            beta_value = self.beta
        # Test
        if round(gamma.cdf(self.value, alpha_value, scale=beta_value), 4) != 0.5000:
            raise me.DecayError(self.opt_failed)
        return alpha_value, beta_value

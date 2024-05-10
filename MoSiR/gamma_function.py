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
        if self.decay_type == "Exponentielle":
            self.alpha = 1
        elif self.decay_type == "Gamma":
            self.beta = 1
        elif self.decay_type == "Chi-square":
            self.beta = 2

    def objective(self, param) -> float:
        if hasattr(self, 'alpha'):
            cdf_value = gamma.cdf(self.value, self.alpha, scale=param)
        elif hasattr(self, 'beta'):
            cdf_value = gamma.cdf(self.value, param, scale=self.beta)
        return abs(cdf_value - 0.5)

    def find_param(self) -> tuple[float, float]:
        result = minimize_scalar(self.objective)
        if result.success == False:
            raise me.DecayError(f"Optimization of {self.node_name} decay \
                values (half-life of {self.value}) unsuccessfull")
        if hasattr(self, 'alpha'):
            alpha_value = self.alpha
            beta_value = result.x
        elif hasattr(self, 'beta'):
            alpha_value = result.x
            beta_value = self.beta
        return alpha_value, beta_value

# Usage:
DecayTypeOptimizer("Name_of_node", "Exponentielle", 1).find_param()

#TODO vérifier les ranges où il y a une erreur et si je peux guider
# le solveur vers la réponse pour l'aider
failed = []
for i in range(150):
    try:
        DecayTypeOptimizer("Name_of_node", "Exponentielle", i).find_param()
    except:
        failed.append(i)

print(failed)


# Banc d'essai — temps de calcul du calculateur MoSiR

Trace versionnée des temps de calcul, pour comparer les gains entre versions.

**Lecture des résultats.** Les temps ABSOLUS ne sont comparables qu'entre lignes
partageant la même **empreinte machine** et la même **échelle**. La métrique
d'intérêt est le **% d'accélération entre deux exécutions sur le même
ordinateur** (avant/après une optimisation). Le **temps normalisé** (calcul /
calibration) est un indicateur secondaire, approximativement comparable entre
machines. Reproduire un point de mesure:

    python -m tests.benchmark_support --record --label baseline

| Date (UTC) | Commit | Label | Empreinte | CPU | Python | numpy/scipy | Noeuds/Edges | T | Construction (s) | Calcul (s) | Calibration (s) | Normalisé |
|---|---|---|---|---|---|---|---|---|---|---|---|---|
| 2026-07-27 01:55 | 66f7f0c | baseline-66f7f0c | e757e957 | Intel64 Family 6 Model 142 Stepping 12, GenuineIntel | 3.12.13 | 2.5.1/1.18.0 | 105/102 | 1000 | 0.004 | 100.261 | 0.486 | 206.37 |
| 2026-07-27 08:08 | 66f7f0c | phase1.1-cumul | e757e957 | Intel64 Family 6 Model 142 Stepping 12, GenuineIntel | 3.12.13 | 2.5.1/1.18.0 | 105/102 | 1000 | 0.002 | 62.398 | 0.424 | 147.32 |
| 2026-07-27 11:24 | 66f7f0c | phase1-complete | e757e957 | Intel64 Family 6 Model 142 Stepping 12, GenuineIntel | 3.12.13 | 2.5.1/1.18.0 | 105/102 | 1000 | 0.002 | 63.371 | 0.433 | 146.41 |
| 2026-07-27 11:34 | 66f7f0c | phase2-vectorize | e757e957 | Intel64 Family 6 Model 142 Stepping 12, GenuineIntel | 3.12.13 | 2.5.1/1.18.0 | 105/102 | 1000 | 0.002 | 4.810 | 0.419 | 11.47 |

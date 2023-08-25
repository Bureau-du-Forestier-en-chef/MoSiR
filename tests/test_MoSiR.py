"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import unittest
import test_Generators
import test_Utilities


if __name__ == '__main__':
    Loader = unittest.TestLoader()
    Suite  = unittest.TestSuite()
    Suite.addTests(Loader.loadTestsFromModule(test_Generators))
    Suite.addTests(Loader.loadTestsFromModule(test_Utilities))
    runner = unittest.TextTestRunner()
    result = runner.run(Suite)
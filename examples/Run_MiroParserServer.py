"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import sys
sys.path.append("../MoSiR")

from MoSiR import FlaskMiroWrapper


if __name__ == '__main__':
    ParserServer = FlaskMiroWrapper("ParserServer",
                                    "http://localhost",
<<<<<<< HEAD
                                    3000,VerifySSL = False)
=======
                                    3000)
>>>>>>> master
    ParserServer.AddAllEndpoints()
    ParserServer.SignIn()
    ParserServer.Run(debug = False)
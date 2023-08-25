"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from MoSiR import FlaskMiroWrapper

if __name__ == '__main__':
    ParserServer = FlaskMiroWrapper("ParserServer",
                                    "http://localhost",
                                    3000,VerifySSL=False)
    ParserServer.AddAllEndpoints()
    ParserServer.SignIn()
    ParserServer.Run(debug=False)
    
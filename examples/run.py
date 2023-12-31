"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import sys
sys.path.append("../MoSiR")

from MoSiR import Flaskwrapper
from MoSiR.mirowrapper.views import mirowrapper
from MoSiR.visualization.views import visualization
from MoSiR.download.views import download
from MoSiR.upload.views import upload
from MoSiR.stats.views import stats
from MoSiR.reporting.views import reporting


if __name__ == '__main__':
    base_url = "http://localhost"
    port = 3000
    host = '0.0.0.0'
    log = True
    server = Flaskwrapper(base_url,host,port,log)
    server.register(mirowrapper)
    server.register(visualization)
    server.register(download)
    server.register(upload)
    server.register(stats)
    server.register(reporting)
    server.sign_in()
    server.run()
    
    

    
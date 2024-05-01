"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import tempfile
from MoSiR import Flaskwrapper
from MoSiR.stats.views import stats
from MoSiR.upload.views import upload
from MoSiR.download.views import download
from MoSiR.reporting.views import reporting
from MoSiR.mirowrapper.views import mirowrapper
from MoSiR.visualization.views import visualization

if "NUITKA_ONEFILE_PARENT" in os.environ:
   ''' Pour l'application standalone
   Sert à avoir un splash screen lorsqu'on lance l'application MoSiR
   standalone (exe). Ne pas toucher, n'impacte pas le main
   ''' 
   splash_filename = os.path.join(
      tempfile.gettempdir(),
      "onefile_%d_splash_feedback.tmp" % int(os.environ["NUITKA_ONEFILE_PARENT"]),
   )
   if os.path.exists(splash_filename):
      os.unlink(splash_filename)

def run_server():
   """Pour démarrer l'API"""
   base_url = "http://localhost"
   port = 3000
   host = '0.0.0.0'
   log = True
   server = Flaskwrapper(base_url, host, port, log)
   server.register(mirowrapper)
   server.register(visualization)
   server.register(download)
   server.register(upload)
   #server.register(stats) TODO more meaningful
   server.register(reporting)
   server.sign_in()
   server.run()

if __name__ == '__main__':
   run_server()

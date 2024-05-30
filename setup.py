"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from setuptools import setup, find_packages

try:
    # pip >=20
    from pip._internal.network.session import PipSession
    from pip._internal.req import parse_requirements
except ImportError:
    try:
        # 10.0.0 <= pip <= 19.3.1
        from pip._internal.download import PipSession
        from pip._internal.req import parse_requirements
    except ImportError:
        # pip <= 9.0.3
        from pip.download import PipSession

install_reqs = parse_requirements("requirements.txt", session = PipSession())

reqs = [str(ir.requirement) for ir in install_reqs]

with open('README.md', encoding='utf-8') as f:
    readme = f.read()

with open('LICENSES/EN/LILIQ-R11EN.txt') as f:
    license = f.read()

# TODO install options à regarder pour aller chercher les json dans artemis pendant une 
    # installation lightweight 
    # https://stackoverflow.com/questions/18725137/how-to-obtain-arguments-passed-to-setup-py-from-pip-with-install-option

setup(
    name = 'MoSiR',
    version = '1.0.0',
    description = 'MoSiR',
    long_description = readme,
    author = 'Gabriel Landry, Guillaume Cyr et Marc-Alexandre Martel',
    author_email = 'gabriel.landry@fec.gouv.qc.ca',
    url = 'https://github.com/Bureau-du-Forestier-en-chef/MoSiR',
    license = license,
    scripts = ['MoSiR.py'],
    packages = find_packages(exclude = ('tests', 'docs', 'image', 'standalone', 'examples')),
    install_requires = reqs,
    package_data = {'MoSiR': ['mirowrapper/**','static/**','templates/*', 
        'gamma_distribution/*', 'uploads/*','visualization/**','radiative_forcing/*', \
        'BFECGCBM/**', 'examples/**','./README.md']}
)
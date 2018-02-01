"""
An example how to generate java code from textX model using jinja2
template engine (http://jinja.pocoo.org/docs/dev/)
"""
import os
from os import mkdir
from os.path import exists, dirname, join
import jinja2
from entity_test import get_entity_mm

"""
ovde importujes sablon i py file  takodje i u def main
""" 
from backend.csharp_class import csharp_class
from backend.csharp_nekifajl import csharp_nekifajl
from backend.csharp_dbset import csharp_dbset

def main(debug=False):
    this_folder = dirname(__file__)
    csharp_class(this_folder, debug)
    csharp_nekifajl(this_folder, debug)
    csharp_dbset(this_folder, debug)

if __name__ == "__main__":
    main()

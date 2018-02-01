"""
An example how to generate java code from textX model using jinja2
template engine (http://jinja.pocoo.org/docs/dev/)
"""
import os
from os.path import exists, dirname, join
import jinja2
from entity_test import get_entity_mm


def csharp_dbset(this_folder, debug):
    entity_mm = get_entity_mm(debug)

    # Build Person model from person.ent file
    person_model = entity_mm.model_from_file(join(this_folder, 'person.ent'))

    # destinacija gde generise samo putanja foldera
    srcgen_folder = join(this_folder, 'srcgen/Data access layer')
    if not exists(srcgen_folder):
        os.makedirs(srcgen_folder)

    # Initialize template engine.
    jinja_env = jinja2.Environment(
        loader=jinja2.FileSystemLoader(this_folder),
        trim_blocks=True,
        lstrip_blocks=True)

    # odakle vuce template
    template = jinja_env.get_template('backend/templates/csharp_dbset.template')

    for entity in person_model.entities:
        # For each entity generate java file
        #ovo je sablon za jedan fajl, nekifajl je sablon za vise fajlova
        with open(join(srcgen_folder,
                       "%s.cs" % 'SchoolContent' ), 'w') as f:
            f.write(template.render(entity=entity))


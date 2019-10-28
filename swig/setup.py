#!/usr/bin/env python

from distutils.core import Extension, setup

setup(
    name='sample',
    version='0.0.1',
    py_modules=['sample'],
    ext_modules=[
        Extension('_sample', sources=['sample.c', 'sample.i'])
    ]
)

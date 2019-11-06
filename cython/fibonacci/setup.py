#!/usr/bin/env python

from distutils.core import Extension, setup
from Cython.Build import cythonize

setup(
    name='fib_wrap',
    version='0.0.1',
    py_modules=['fib_wrap'],
    ext_modules=cythonize(
        Extension('fib_wrap', sources=['cfib.c', 'fib_wrap.pyx'])
    )
)

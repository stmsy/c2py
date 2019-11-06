# Sample Python Binding Project

## Requirements

- [pyenv](https://github.com/pyenv/pyenv)
- [pyenv-virtualenv](https://github.com/pyenv/pyenv-virtualenv)
- [SWIG](http://www.swig.org/)
- [Cython](https://cython.org/)

Create a Python virtual environment named `c2py` with `pyenv` and `pyenv-virtualenv` before you start working with SWIG and Cython. For example, run the following

```shell
pyenv intall 3.7.2
pyenv virtualenv 3.7.2 c2py
pyenv local c2py  # Run the command at the project root directory
```
and you may opt to install the packages listed in `requirements.txt` as follows.

```shell
pip intall -U pip  # Optional
pip install -r requirements.txt
```

## Usage

### SWIG

```shell
cd swig
swig -python sample.i  # sample_wrap.c will be generated
python setup.py build_ext
python setup.py install --prefix=$PYENV_VIRTUAL_ENV
```

### Cython

```shell
cd cython
swig -python sample.i  # fib_wrap.c will be generated
python setup.py build_ext
python setup.py install --prefix=$PYENV_VIRTUAL_ENV
```

## References

- [Distributing Python Modules (Legacy version)](https://docs.python.org/3.7/distutils/index.html)
- [HOWTO: Install your own python modules](https://www.osc.edu/book/export/html/3004)

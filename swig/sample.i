%module sample

%{
#define SWIG_FILE_WITH_INIT
#include "sample.h"
%}

double dvar;
int fact(int n);
char *get_time();

#define N 100

/* Check whether n is large. */
int isLarge(int n) {
    if (n > N)
	return 1;
    else
	return 0;
}

/* Compute the nth Fibonacci number. */
double cfib(int n) {
    int res = isLarge(n);
    if (res)
	return -1;
    double a = 0.0;
    double b = 1.0;
    double tmp;
    int i;
    for (i = 0; i <= n; i++) {
	tmp = b;
	b = a + b;
	a = tmp;
    }
    return b;
}

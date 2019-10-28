#include <time.h>

double dvar = 3.0;

/* Compute the nth factorial */
int fact(int n) {
    if (n <= 1)
	return 1;
    else
	return n * fact(n-1);
}

/* Get current time in JST */
char *get_time() {
    time_t ltime;
    time(&ltime);
    return ctime(&ltime);
}

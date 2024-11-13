/** lab32functs.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 32
* ===========================================================  */

#include "lab32functs.h"


int factorial(int N) {

    if (N < 2) {
        return 1;
    }

    return N * factorial(N-1);
}

int tail_factorial(int N, int accum) {
    if (N < 2) {
        return accum;
    }
    return tail_factorial(N - 1, accum * N);
}

double calculateDecayDuration(int N, double halflifeInYears, double accum) {
    if (N < 1) {
        return accum;
    }
    return calculateDecayDuration(N / 2, halflifeInYears, accum + halflifeInYears);
}

int collatz(int N, int accum) {
    if (N == 1) {
        return accum;
    } else if (N % 2 == 0) {
        return collatz(N / 2, accum + 1);
    }
    return collatz(3 * N + 1, accum + 1);
}


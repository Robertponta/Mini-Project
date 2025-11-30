#include <stdio.h>

void fxor(int a, int b, int *r) {
    *r = a ^ b;
}

void fsoma(long long a, long long b, long long *r) {
    if (a > b) {
        long long t = a;
        a = b;
        b = t;
    }
    long long n = b - a + 1;
    *r = (n * (a + b)) / 2;
}

void fig(int a, int b, int *r) {
    *r = (a == b) ? 1 : 0;
}

void fand(int a, int b, int *r) {
    int x = (a != 0);
    int y = (b != 0);
    *r = (x && y) ? 1 : 0;
}

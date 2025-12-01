#include<stdio.h>

//Renato
void division(int a, int b, double *div) {
    if (b == 0) div = NULL;
    *div = a / b;
}

void maximum(int a, int b, int *max) {
    if (a >= b) *max = a;
    else *max = b;
}

void absolute(int x, int *abs) {
    if (x < 0) *abs = -x;
    else *abs = x;
}

void menorOuIgual(int a, int b, int *menorouigual) {
    if (a <= b) *menorouigual = 1;
    else *menorouigual = 0;
} 

//Paulo
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


int main(){



  

  return 0;
}

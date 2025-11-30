#include<stdio.h>

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

int main(){



  

  return 0;
}

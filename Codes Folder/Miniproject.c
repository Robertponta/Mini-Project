#include<stdio.h>

void division(int a, int b, double *div);
void maximum(int a, int b, int *max);
void absolute(int x, int *abs);
void menorOuIgual(int a, int b, int *menorouigual);
void menorQue(int a,int b,int *menorque);
void potencia(int base,int expoente,long long int *resultado);
void notAnd(int a,int b,int *notand);
void notOr(int a,int b,int *notor);

int main(){



  

  return 0;
}

void xor_bit(int a, int b, int *resultado) {
    *resultado = a ^ b;
}

void somatorio_intervalo(int inicio, int fim, long long int *resultado) {
    *resultado = 0;
    int i;  
    for (i = inicio; i <= fim; i++) {
        *resultado += i;
    }
}

void igualdade(int a, int b, int *resultado) {
    if (a == b)
        *resultado = 1;
    else
        *resultado = 0; 
}

void and_logico(int a, int b, int *resultado) {
    if (a && b)
        *resultado = 1;
    else
        *resultado = 0; 
}

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

void menorQue(int a,int b,int *menorque){
    *menorque=(a<b)? 1:0;
}

void potencia(int base,int expoente,long long int *resultado){
*resultado=1;
    for(int i=0;i<expoente;i++){
        *resultado*=base;
    }
}

void notAnd(int a,int b,int *notand){
    *notand=(a&&b)? 0:1;
}

void notOr(int a,int b,int *notor){
    *notor=(a||b)? 0:1;
}
#include<stdio.h>

void division(int a, int b, double *div); // Função 4 - Renato
void maximum(int a, int b, int *max); // Função 17 - Renato
void absolute(int x, int *abs); // Função 18 - Renato
void menorOuIgual(int a, int b, int *menorouigual); // Função 24 - Renato
void menorQue(int a,int b,int *menorque); // Função 22 - Robert
void potencia(int base,int expoente,long long int *resultado); // Função 6 - Robert
void notAnd(int a,int b,int *notand); // Função 26 - Robert
void notOr(int a,int b,int *notor); // Função 28 - Robert
void fxor(int a, int b, int *r); // Função 10 - Paulo
void fsoma(long long a, long long b, long long *r); // Função 14 - Paulo
void fig(int a, int b, int *r); // Função 19 - Paulo
void fand(int a, int b, int *r); // Função 25 - Paulo
void maiorQue(int a, int b, int *maiorque); // Função 21 - Renato
void soma (int a, int b, int *r);
void shiftDireita(int a, int b, int *r);
void produtorio(int a, int b, long long int *r);
void maiorIgual(int a, int b, int *maiorIgual);
void multiplicacao(int a, int b, int *r); //funcao 3 - joao henrique 
void resto(int a, int b, int *r); //funcao 5 - joao henrique
void mindoisnumeros(int a, int b, int *min); //funcao 16 - joao henrique
void diferente(int a, int b, int *v); //funcao 20 - joao henrique
void subtracao(int a, int b, int *r); //função 2 - Wender
void media2 (int a, int b, double *r); //função 13 - Wender
void Andbitabit (int a, int b, int *r)// função 8 - Wender
void fatorial (int a, int *r) // função 7 - Wender

int main(){



  

  return 0;
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

void maiorQue(int a, int b, int *maiorque) {
    if (a > b) *maiorque = 1;
    else *maiorque = 0;
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

void soma (int a, int b, int *r){
    *r = a + b;
}

void shiftDireita(int a, int b, int *r) {
    *r = a >> b;
}

void produtorio(int a, int b, long long int *r){
    int n;
    long long int produto;

    produto = 1;

    for (n = a; n <= b; n++){
        produto *= n;
    }

    *r = produto;
}

void maiorIgual(int a, int b, int *maiorIgual) {
    if (a >= b) *maiorIgual = 1;
    else *maiorIgual = 0;
} 

void multiplicacao(int a, int b, int *r){
    *r = a*b;
}
void resto(int a, int b, int *r){
    *r = a % b;
}
void mindoisnumeros(int a, int b, int *min){
    if(a < b) *min = a;
    else *min = b;
}

void diferente(int a, int b, int *v){
    if(a != b) *v = 1;
    else *v = 0;
}

void subtracao(int a, int b, int *r){
    *r = a - b;
}

void media2 (int a, int b, double *r){
    *r = (a + b) / 2;
}

void Andbitabit(int a, int b, int *r){
    *r = a & b;
}

void fatorial (int a, int *r){
    int i;
    *r = 1;
    for (i = 2; i <= a; i++){
        *r *= i;
    }
}

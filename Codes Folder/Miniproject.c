#include <stdio.h>
#include <stdlib.h>

void limparTela(void);
void abaA(void);
void abaB(void);
void abaC(void);
void abaD(void);

void divisao(int a, int b, double *div); // Função 4 - Renato
void maximo(int a, int b, int *max); // Função 17 - Renato
void absoluto(int x, int *abs); // Função 18 - Renato
void menor_ou_igual(int a, int b, int *menorouigual); // Função 24 - Renato
void menor_que(int a,int b,int *menorque); // Função 22 - Robert
void potencia(int base,int expoente,long long int *resultado); // Função 6 - Robert
void notAnd(int a,int b,int *notand); // Função 26 - Robert
void notOr(int a,int b,int *notor); // Função 28 - Robert
void fxor(int a, int b, int *r); // Função 10 - Paulo
void fsoma(long long a, long long b, long long *r); // Função 14 - Paulo
void fig(int a, int b, int *r); // Função 19 - Paulo
void fand(int a, int b, int *r); // Função 25 - Paulo
void maior_que(int a, int b, int *maiorque); // Função 21 - Renato
void soma (int a, int b, int *r);
void shift_a_direita(int a, int b, int *r);
void produtorio(int a, int b, long long int *r);
void maiorIgual(int a, int b, int *maiorIgual);
void multiplicacao(int a, int b, int *r); //funcao 3 - joao henrique 
void resto(int a, int b, int *r); //funcao 5 - joao henrique
void min_dois_numeros(int a, int b, int *min); //funcao 16 - joao henrique
void diferente(int a, int b, int *v); //funcao 20 - joao henrique
void subtracao(int a, int b, int *r); //função 2 - Wender
void media (int a, int b, double *r); //função 13 - Wender
void and_bit_abit (int a, int b, int *r);// função 8 - Wender
void fatorial (int a, int *r); // função 7 - Wender


int main() {
    
    char selecionadordeabas='x';

    while(selecionadordeabas!='0'){
        
        limparTela();

        printf("===== MENU PRINCIPAL =====\n");
        printf("A - Aba 1 (Operacoes 1 a 7)\n");
        printf("B - Aba 2 (Operacoes 8 a 14)\n");
        printf("C - Aba 3 (Operacoes 15 a 21)\n");
        printf("D - Aba 4 (Operacoes 22 a 28)\n");
        printf("0 - Encerrar o Programa\n");
        printf("Escolha uma opcao: ");
        
        selecionadordeabas=getchar();
        getchar();

        if(selecionadordeabas>='a'&&selecionadordeabas<='z'){selecionadordeabas-=32;}
        
        limparTela();

        switch(selecionadordeabas){
            case 'A': abaA(); break;
            case 'B': abaB(); break;
            case 'C': abaC(); break;
            case 'D': abaD(); break;
            case '0': printf("Encerrando programa...\n"); break;
            default: printf("Opcao invalida!\nPressione ENTER para continuar..."); getchar();
        }
    }
    return 0;
}

void abaA(void){
    
    char opc;
    int nlidos=999,n1,n2,flag;
    long long int resultado;

    do{
        limparTela();

        printf("=== Aba A: Operacoes 1 a 7 ===\n");
        printf("1 - Soma(+)\n2 - Subtracao(-)\n3 - Multiplicacao(*)\n4 - Divisao(/)\n5 - Resto(%%)\n6 - Potencia(~)\n7 - Fatoracao(!)\n0 - Voltar ao menu principal\nEscolha uma opcao: ");
        
        opc=getchar();
        getchar();

        switch(opc){
            case '1':printf("Executando soma: digite 2 numeros para somar\n"); while(nlidos!=2){
            nlidos=scanf("%d%d",&n1,&n2);if(nlidos!=2){
            printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else
            {
                soma(n1,n2,&resultado);
                printf("Resultado: %lld",resultado);
            }
            }
            nlidos=999; break;
            case '2': printf("Executando subtracao: digite 2 numeros para subtrair\n"); while(nlidos!=2){
            nlidos=scanf("%d%d",&n1,&n2);if(nlidos!=2){
            printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else
            {
                subtracao(n1,n2,&resultado);
                printf("Resultado: %lld",resultado);
            }
            }
            nlidos=999; break;
            case '3': printf("Executando multiplicacao: digite 2 numeros para multiplicar\n"); while(nlidos!=2){
            nlidos=scanf("%d%d",&n1,&n2);if(nlidos!=2){
            printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else
            {
                printf("Resultado: %lld",multiplicacao(n1,n2,&resultado));
            }
            }
            nlidos=999; break;
            case '4': printf("Executando divisao: digite 2 numeros para dividir\n"); while(nlidos!=2||n2==0){
            nlidos=scanf("%d%d",&n1,&n2);if(nlidos!=2){
            printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else if (n2==0)
            {
                printf("Nao Existe divisao por 0, insira os numeros novamente com o segundo sendo diferente de 0\n");
            }
             else
            {
                printf("Resultado: %lld",divisao(n1,n2,&resultado));
            }
            }
            nlidos=999; break;
            case '5': printf("Executando resto da divisao: digite 2 numeros para dividir\n"); while(nlidos!=2){
            nlidos=scanf("%d%d",&n1,&n2);if(nlidos!=2){
            printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else
            {
                printf("Resultado: %lld",resto(n1,n2,&resultado));
            }
            }
            nlidos=999; break;
            case '6': printf("Executando potenciacao: digite 2 numeros (base e expoente)\n"); while(nlidos!=2){
            nlidos=scanf("%d%d",&n1,&n2);if(nlidos!=2){
            printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else
            {
                printf("Resultado: %lld",potencia(n1,n2,&resultado));
            }
            }
            nlidos=999; break;
            case '7': printf("Executando fatorial: digite 1 numero para fatorar\n"); while(nlidos!=1){
            nlidos=scanf("%d",&n1);if(nlidos!=1){
            printf("Quantidade de numeros invalida, digite apenas 1 numero para essa operação\n");} else
            {
                printf("Resultado: %lld",fatorial(n1,&resultado));
            }
            }
            nlidos=999; break;
            case '0': break;
            default: printf("Opcao invalida!\n"); break;
        }
        if(opc!='0'){printf("Pressione ENTER para continuar..."); getchar();}
    }while(opc!='0');
}

void abaB(void){
    
    char opc;
    int nlidos=999,n1,n2, flag;
    long long int resultado;

    do{
        limparTela();

        printf("=== Aba B: Operacoes 8 a 14 ===\n");
        printf("8 - AND bit a bit(&)\n9 - OR bit a bit(|)\n10 - XOR bit a bit(^)\n11 - Shift a direita(>>)\n12 - Shift a esquerda(<<)\n13 - Media de dois numeros(M)\n14 - Somatorio de um intervalo(S)\n0 - Voltar ao menu principal\nEscolha uma opcao: ");
        
        opc=getchar();
        getchar();
        
        switch(opc){
            case '8': printf("Executando And Bit a Bit: digite 2 numeros para executar a operacao\n"); while(nlidos!=2){
            nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
            printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else {
                printf("Resultado: %lld",and_bit_a_bit(n1,n2,&resultado));
            }} nlidos=999; break;

            case '9': printf("Executando OR Bit a Bit: digite 2 numeros para executar a operacao\n"); while(nlidos!=2){
            nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
            printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else {
                printf("Resultado: %lld",or_bit_a_bit(n1,n2,&resultado));
            }} nlidos=999; break;

            case '1':{
                char digito=getchar(); getchar();

                if(digito=='0'){printf("Executando XOR Bit a Bit: digite 2 numeros para executar a operacao\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else {
                    printf("Resultado: %lld",xor_bit_a_bit(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='1'){printf("Executando Shift a Direita: digite 2 numeros para executar a operacao\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else {
                    printf("Resultado: %lld",shift_a_direita(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='2'){printf("Executando Shift a Esquerda: digite 2 numeros para executar a operacao\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else {
                    printf("Resultado: %lld",shift_a_esquerda(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='3'){printf("Executando Media: digite 2 numeros para executar a operacao\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else {
                    printf("Resultado: %lld",media(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='4'){printf("Executando Somatorio: digite 2 numeros (inicio e fim)\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade de numeros invalida, digite 2 numeros para essa operação\n");} else {
                    printf("Resultado: %lld",somatorio(n1,n2,&resultado));
                }} nlidos=999; break;}

                else printf("Opcao invalida!\n");
                break;
            }

            case '0': break;
            default: printf("Opcao invalida!\n"); break;
        }
        if(opc!='0'){printf("Pressione ENTER para continuar..."); getchar();}
    }while(opc!='0');
}

void abaC(void){
    
    char opc;
    int nlidos=999,n1,n2,flag;
    long long int resultado;

    do{
        limparTela();

        printf("=== Aba C: Operacoes 15 a 21 ===\n");
        printf("15 - Produtorio de um intervalo(P)\n16 - Minimo entre dois numeros(min)\n17 - Maximo entre dois numeros(max)\n18 - Valor absoluto de um numero(abs)\n19 - Igualdade(==)\n20 - Diferenca(!=)\n21 - Maior que(>)\n0 - Voltar ao menu principal\nEscolha uma opcao: ");
        
        opc=getchar();
        getchar();

        switch(opc){
            case '1':{
                char digito=getchar(); getchar();

                if(digito=='5'){printf("Executando Produtorio: digite dois numeros (inicio e fim)\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",produtorio(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='6'){printf("Executando Minimo: digite 2 numeros\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",minimo(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='7'){printf("Executando Maximo: digite 2 numeros\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",maximo(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='8'){printf("Executando Valor absoluto: digite 1 numero\n"); while(nlidos!=1){
                nlidos=scanf("%d",&n1); if(nlidos!=1){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",absoluto(n1,&resultado));
                }} nlidos=999; break;}

                else if(digito=='9'){printf("Executando Igualdade: digite 2 numeros\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",igualdade(n1,n2,&resultado));
                }} nlidos=999; break;}

                else printf("Opcao invalida!\n");
                break;
            }

            case '2':{
                char digito=getchar(); getchar();

                if(digito=='0'){printf("Executando Diferenca: digite 2 numeros\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",diferenca(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='1'){printf("Executando Maior que: digite 2 numeros\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",maior_que(n1,n2,&resultado));
                }} nlidos=999; break;}

                else printf("Opcao invalida!\n");
                break;
            }

            case '0': break;
            default: printf("Opcao invalida!\n"); break;
        }
        if(opc!='0'){printf("Pressione ENTER para continuar..."); getchar();}
    }while(opc!='0');
}


void abaD(void){
    
    char opc;
    int nlidos=999,n1,n2,flag;
    long long int resultado;

    do{
        limparTela();

        printf("=== Aba D: Operacoes 22 a 28 ===\n");
        printf("22 - Menor que(<)\n23 - Maior ou igual(>=)\n24 - Menor ou igual(<=)\n25 - AND(&&)\n26 - NAND(!&)\n27 - OR(||)\n28 - NOR(!|)\n0 - Voltar ao menu principal\nEscolha uma opcao: ");
        
        opc=getchar();
        getchar();

        switch(opc){
            case '2':{
                char digito=getchar(); getchar();

                if(digito=='2'){printf("Executando Menor que: digite 2 numeros\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",menor_que(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='3'){printf("Executando Maior ou igual: digite 2 numeros\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",maior_ou_igual(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='4'){printf("Executando Menor ou igual: digite 2 numeros\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",menor_ou_igual(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='5'){printf("Executando AND: digite 2 numeros\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",and_logico(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='6'){printf("Executando NAND: digite 2 numeros\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",nand_logico(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='7'){printf("Executando OR: digite 2 numeros\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",or_logico(n1,n2,&resultado));
                }} nlidos=999; break;}

                else if(digito=='8'){printf("Executando NOR: digite 2 numeros\n"); while(nlidos!=2){
                nlidos=scanf("%d%d",&n1,&n2); if(nlidos!=2){
                printf("Quantidade invalida!\n");} else {
                    printf("Resultado: %lld",nor_logico(n1,n2,&resultado));
                }} nlidos=999; break;}

                else printf("Opcao invalida!\n");
                break;
            }

            case '0': break;
            default: printf("Opcao invalida!\n"); break;
        }
        if(opc!='0'){printf("Pressione ENTER para continuar..."); getchar();}
    }while(opc!='0');
}


void limparTela(void){
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
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
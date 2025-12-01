#include <stdio.h>
#include <stdlib.h>

void limparTela(void);
void abaA(void);
void abaB(void);
void abaC(void);
void abaD(void);

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

    do{
        limparTela();

        printf("=== Aba A: Operacoes 1 a 7 ===\n");
        printf("1 - Soma(+)\n2 - Subtracao(-)\n3 - Multiplicacao(*)\n4 - Divisao(/)\n5 - Resto(%%)\n6 - Potencia(~)\n7 - Fatoracao(!)\n0 - Voltar ao menu principal\nEscolha uma opcao: ");
        
        opc=getchar();
        getchar();

        switch(opc){
            case '1': printf("Executando Soma...\n"); break;
            case '2': printf("Executando Subtracao...\n"); break;
            case '3': printf("Executando Multiplicacao...\n"); break;
            case '4': printf("Executando Divisao...\n"); break;
            case '5': printf("Executando Resto...\n"); break;
            case '6': printf("Executando Potencia...\n"); break;
            case '7': printf("Executando Fatoracao...\n"); break;
            case '0': break;
            default: printf("Opcao invalida!\n"); break;
        }
        if(opc!='0'){printf("Pressione ENTER para continuar..."); getchar();}
    }while(opc!='0');
}

void abaB(void){
    
    char opc;

    do{
        limparTela();

        printf("=== Aba B: Operacoes 8 a 14 ===\n");
        printf("8 - AND bit a bit(&)\n9 - OR bit a bit(|)\n10 - XOR bit a bit(^)\n11 - Shift a direita(>>)\n12 - Shift a esquerda(<<)\n13 - Media de dois numeros(M)\n14 - Somatorio de um intervalo(S)\n0 - Voltar ao menu principal\nEscolha uma opcao: ");
        
        opc=getchar();
        getchar();
        
        switch(opc){
            case '8': printf("Executando AND bit a bit...\n"); break;
            case '9': printf("Executando OR bit a bit...\n"); break;
            case '1':{
                
                char digito=getchar(); getchar();

                if(digito=='0') printf("Executando XOR bit a bit...\n");
                else if(digito=='1') printf("Executando Shift a direita...\n");
                else if(digito=='2') printf("Executando Shift a esquerda...\n");
                else if(digito=='3') printf("Executando Media...\n");
                else if(digito=='4') printf("Executando Somatorio...\n");
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
    do{
        limparTela();

        printf("=== Aba C: Operacoes 15 a 21 ===\n");
        printf("15 - Produtorio de um intervalo(P)\n16 - Minimo entre dois numeros(min)\n17 - Maximo entre dois numeros(max)\n18 - Valor absoluto de um numero(abs)\n19 - Igualdade(==)\n20 - Diferenca(!=)\n21 - Maior que(>)\n0 - Voltar ao menu principal\nEscolha uma opcao: ");
        
        opc=getchar();
        getchar();

        switch(opc){
            
            case '1':{

                char digito=getchar(); getchar();

                if(digito=='5') printf("Executando Produtorio...\n");
                else if(digito=='6') printf("Executando Minimo...\n");
                else if(digito=='7') printf("Executando Maximo...\n");
                else if(digito=='8') printf("Executando Valor absoluto...\n");
                else if(digito=='9') printf("Executando Igualdade...\n");
                else printf("Opcao invalida!\n");
                break;
            }
            case '2':{
                
                char digito=getchar(); getchar();

                if(digito=='0') printf("Executando Diferenca...\n");
                else if(digito=='1') printf("Executando Maior que...\n");
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

    do{
        limparTela();
        printf("=== Aba D: Operacoes 22 a 28 ===\n");
        printf("22 - Menor que(<)\n23 - Maior ou igual(>=)\n24 - Menor ou igual(<=)\n25 - AND(&&)\n26 - NAND(!&)\n27 - OR(||)\n28 - NOR(!|)\n0 - Voltar ao menu principal\nEscolha uma opcao: ");
        
        opc=getchar();
        getchar();

        switch(opc){
            case '2':{
                
                char digito=getchar(); getchar();
                
                if(digito=='2') printf("Executando Menor que...\n");
                else if(digito=='3') printf("Executando Maior ou igual...\n");
                else if(digito=='4') printf("Executando Menor ou igual...\n");
                else if(digito=='5') printf("Executando AND...\n");
                else if(digito=='6') printf("Executando NAND...\n");
                else if(digito=='7') printf("Executando OR...\n");
                else if(digito=='8') printf("Executando NOR...\n");
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

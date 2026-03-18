#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int contador = 0;

int PesquisaSequencial(int * Vetor, int Tamanho, int Chave);

int main(){

    system("cls");

    int V[] = {
        14, 29, 37, 11, 43, 25, 19, 32, 16, 22,
        40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
        30, 41, 15, 27, 33, 18, 26, 39, 12, 21
    };

    int N = sizeof(V) / sizeof(int);

    int teste_1 = PesquisaSequencial(V, N, 16);

    if (teste_1 != ERRO) printf("O numero procurado esta na posiçao  %d\n", teste_1);
    else printf("O elemneto nao esta no vetor!\n");

    int teste_2 = PesquisaSequencial(V, N, 21);

    if (teste_2 != ERRO) printf("O numero procurado esta na posiçao  %d\n", teste_2);
    else printf("O elemneto nao esta no vetor!\n");

    int teste_3 = PesquisaSequencial(V, N, 99);

    if (teste_3 != ERRO) printf("O numero procurado esta na posiçao  %d\n", teste_3);
    else printf("O elemneto nao esta no vetor!\n");


    return 0;
}

int PesquisaSequencial(int * Vetor, int Tamanho, int Chave){

    for (int i = 0; i < Tamanho; i++){
        contador++;
         
         if (Vetor[i] == Chave){// i é a posição do elemento procurado!
            
            return i;
         }
    }

    return ERRO;
}


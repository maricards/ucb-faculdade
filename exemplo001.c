#include <stdio.h>
#include <stdlib.h>

int ehprimo(int n);

int main(){

    system("cls");

    int numero;

INICIO:

    printf("Digite um nuemro: ");
    scanf("%d", &numero);

    if(ehprimo(numero) == 1) printf("%d eh primo.\n", numero);
    else printf("%d NAO eh primo!\n", numero);

    goto INICIO;

    return 0;
}

//implementaçao de funçao

int ehprimo(int n){

    if(n <= 1) return 0;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1; // se todos os testes ifs
}
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int numerador;
    int denominador;

}fracao;

fracao criaFracao(int n, int d);
void exibirFracao (fracao f);
fracao inverterFracao(fracaof);

//implementaçao da funçaio principal main
int main(){

    fracao f1 = criaFracao (3,7);
    fracao f2 = criaFracao (12,20);
    fracao f3 = criaFracao (6,2);

    exibirFracao(f1);
    exibirFracao(f2);
    exibirFracao(f3);

    fracao f4 = inverterFracao(f1);
    exibirFracao(f4);

    exibirFracao(inverterFracao(f2));
    exibirFracao(inverterFracao(f3));


}

fracao criaFracao(int n, int d){
    if(d == 0) {
        printf("ERRO: nao e possivel criar fracao com denominador 0!\n");
        exit(1);
    }

    fracao f;
    f.numerador = n;
    f.denominador = d;
    return f;
}
fracao inverterFracao(fracao){
    fracao g;

    g.numerador = f.denominador;
    g.denominador = f.denominador;

    return g;
}



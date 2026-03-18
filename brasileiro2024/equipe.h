#ifndef EQUIPE_H
#define EQUIPE_H

typedef struct{

    int Posiçao;
    char Estado[32];
    char Time[32];
    int Pontos;
    int J;
    int V;
    int E;
    int D;
    int GP;
    int GC;
    int SG;
    float Aproveitamento;

}Equipe;

Equipe * lerDados(char * Arquivo){

    FILE * fp = fopen(Arquivo, "r");

    if ((fp == NULL)){

        printf("ERRO: Nao foi possivel abrir o arquivo!\n");
        exit(1);
    }

    Equipe * X = malloc(20 * sizeof(Equipe));
    
    if(X == NULL){
        printf("ERRO: Nao foi possivel alocar memoria para o conjunto!\n");
        exit(1);
    }

    char Buffer[100];
    fscanf(fp, "%[^\n]\n", Buffer);

    int N = 0;

    fscanf(fp,"%d;%s;%s;%d;%d;%d;%d;%d;%d", 
        &X[N].Posiçao,
        &X[N].Estado,
        &X[N].Time,
        &X[N].Pontos,
        &X[N].J,
        &X[N].V,
        &X[N].E,
        &X[N].D,
        &X[N].GP,
        &X[N].GC,
        &X[N].SG,
    )==11

    while (fscanf(fp,"%d;%s;%s;%d;%d;%d;%d;%d;%d", 
        &X[N].Posiçao,
        &X[N].Estado,
        &X[N].Time,
        &X[N].Pontos,
        &X[N].J,
        &X[N].V,
        &X[N].E,
        &X[N].D,
        &X[N].GP,
        &X[N].GC,
        &X[N].SG,
            )==11)
    {
        X[N].Aproveitamento = 100.0 * X[N].Pontos / (3.0 * X[N].J);
        N++;
    }

    fclose(fp);
    
    



}

#endif
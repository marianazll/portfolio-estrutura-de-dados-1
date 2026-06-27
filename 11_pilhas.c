#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
}No;

typedef struct{
    No *topo;
}Pilha;

int main(){
    printf("Exemplo de pilha.\n");
    return 0;
}

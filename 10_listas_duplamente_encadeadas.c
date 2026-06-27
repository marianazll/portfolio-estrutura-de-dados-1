#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista *ant;
    struct lista *prox;
}Lista;

int main(){
    printf("Exemplo de lista duplamente encadeada.\n");
    return 0;
}

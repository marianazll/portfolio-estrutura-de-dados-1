#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
}No;

int main(){
    printf("Exemplo de lista circular.\n");
    return 0;
}

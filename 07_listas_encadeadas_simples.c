#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista *prox;
}Lista;

Lista* insere(Lista* l,int v){
    Lista* novo=(Lista*)malloc(sizeof(Lista));
    novo->info=v;
    novo->prox=l;
    return novo;
}

void imprime(Lista* l){
    Lista* p;
    for(p=l;p!=NULL;p=p->prox)
        printf("%d -> ",p->info);
    printf("NULL\n");
}

int main(){
    Lista* l=NULL;
    l=insere(l,10);
    l=insere(l,20);
    l=insere(l,30);
    imprime(l);
}

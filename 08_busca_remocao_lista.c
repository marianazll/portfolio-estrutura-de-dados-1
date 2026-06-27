#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista *prox;
}Lista;

Lista* busca(Lista* l,int v){
    Lista* p;
    for(p=l;p!=NULL;p=p->prox)
        if(p->info==v) return p;
    return NULL;
}

int main(){ return 0; }

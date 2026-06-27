#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int info;
    struct lista *prox;
} Lista;

/* Inicializa lista vazia */
Lista* inicializa() {
    return NULL;
}

/* Insere elemento no início */
Lista* insere(Lista *l, int valor) {
    Lista *novo = (Lista*) malloc(sizeof(Lista));

    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        return l;
    }

    novo->info = valor;
    novo->prox = l;

    return novo;
}

/* Busca um valor na lista */
Lista* busca(Lista *l, int valor) {
    Lista *p;

    for (p = l; p != NULL; p = p->prox) {
        if (p->info == valor) {
            return p;
        }
    }

    return NULL;
}

/* Remove o último elemento da lista */
Lista* removeUltimo(Lista *l) {

    if (l == NULL) {
        printf("\nLista vazia.\n");
        return NULL;
    }

    if (l->prox == NULL) {
        free(l);
        return NULL;
    }

    Lista *p = l;

    while (p->prox->prox != NULL) {
        p = p->prox;
    }

    free(p->prox);
    p->prox = NULL;

    return l;
}

/* Imprime todos os elementos */
void imprime(Lista *l) {

    Lista *p;

    printf("\nLista: ");

    for (p = l; p != NULL; p = p->prox) {
        printf("%d -> ", p->info);
    }

    printf("NULL\n");
}

/* Libera toda a memória da lista */
void libera(Lista *l) {

    Lista *p = l;

    while (p != NULL) {
        Lista *temp = p->prox;
        free(p);
        p = temp;
    }
}

int main() {

    Lista *lista = inicializa();
    Lista *resultado;

    /* Inserindo valores */
    lista = insere(lista, 50);
    lista = insere(lista, 40);
    lista = insere(lista, 30);
    lista = insere(lista, 20);
    lista = insere(lista, 10);

    printf("Lista original:\n");
    imprime(lista);

    /* Busca */
    resultado = busca(lista, 30);

    if (resultado != NULL) {
        printf("\nValor %d encontrado na lista.\n", resultado->info);
    } else {
        printf("\nValor nao encontrado.\n");
    }

    /* Remoção do último elemento */
    lista = removeUltimo(lista);

    printf("\nLista apos remover o ultimo elemento:\n");
    imprime(lista);

    /* Liberação da memória */
    libera(lista);

    return 0;
}

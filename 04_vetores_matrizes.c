#include <stdio.h>

int main() {
    int vetor[5] = {1,2,3,4,5};
    int i, soma = 0;

    for(i=0;i<5;i++)
        soma += vetor[i];

    printf("Soma = %d\n", soma);

    return 0;
}

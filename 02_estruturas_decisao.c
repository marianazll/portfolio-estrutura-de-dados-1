#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if(nota >= 7)
        printf("Aprovado\n");
    else if(nota >= 5)
        printf("Recuperacao\n");
    else
        printf("Reprovado\n");

    return 0;
}

#include <stdio.h>

typedef struct{
    char nome[50];
    int idade;
} Pessoa;

int main(){
    Pessoa p;

    printf("Nome: ");
    scanf(" %[^\n]", p.nome);

    printf("Idade: ");
    scanf("%d",&p.idade);

    printf("%s - %d anos\n",p.nome,p.idade);

    return 0;
}

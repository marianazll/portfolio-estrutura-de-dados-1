#include <stdio.h>

#define TAM 10

int fila[TAM];
int inicio = 0;
int fim = -1;
int quantidade = 0;

void gerarSenha(int senha) {
    if (quantidade == TAM) {
        printf("Fila de senhas cheia!\n");
        return;
    }

    fim++;
    fila[fim] = senha;
    quantidade++;

    printf("Senha %d gerada com sucesso!\n", senha);
}

void chamarSenha() {
    if (quantidade == 0) {
        printf("Nenhuma senha na fila!\n");
        return;
    }

    printf("Senha chamada: %d\n", fila[inicio]);

    inicio++;
    quantidade--;
}

void mostrarFila() {
    if (quantidade == 0) {
        printf("Fila vazia!\n");
        return;
    }

    printf("\nFila de senhas:\n");

    for (int i = inicio; i <= fim; i++) {
        printf("%d\n", fila[i]);
    }
}

int main() {
    int opcao, senha;

    do {
        printf("\n===== FILA DE SENHAS =====\n");
        printf("1 - Gerar nova senha\n");
        printf("2 - Chamar proxima senha\n");
        printf("3 - Mostrar fila\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite a senha: ");
                scanf("%d", &senha);
                gerarSenha(senha);
                break;

            case 2:
                chamarSenha();
                break;

            case 3:
                mostrarFila();
                break;

            case 0:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}

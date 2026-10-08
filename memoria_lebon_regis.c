#include <stdio.h>

int main() {
    int opcao;
    printf("===== Memória de Lebon Régis =====\n");
    printf("1. Pontos Históricos\n");
    printf("2. Personagens\n");
    printf("3. Festas\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    if (opcao == 1) {
        printf("Igreja Matriz, Prefeitura antiga...\n");
    } else if (opcao == 2) {
        printf("Famílias pioneiras da região...\n");
    } else if (opcao == 3) {
        printf("Festa do Padroeiro, Festa do Colono...\n");
    } else if (opcao == 0) {
        printf("Saindo... Até logo!\n");
    } else {
        printf("Opção inválida!\n");
    }
    return 0;
}

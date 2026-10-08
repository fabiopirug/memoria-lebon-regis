#include <stdio.h>
#include <stdlib.h>

void mostrarPontosHistoricos() {
    system("cls");
    printf("=========================================\n");
    printf("🏙️  PONTOS HISTÓRICOS DE LEBON RÉGIS\n");
    printf("=========================================\n\n");
    printf("• Fundação: [COLOQUE AQUI O ANO]\n");
    printf("• Nome da cidade: [SIGNIFICADO/ORIGEM DO NOME]\n");
    printf("• Primeira igreja: [NOME E DATA]\n");
    printf("• Primeira escola: [NOME E DATA]\n\n");
    printf("(Volte depois para preencher com as informações corretas!)\n\n");
    printf("Pressione ENTER para voltar ao menu...");
    getchar();
}

void mostrarPersonagens() {
    system("cls");
    printf("=========================================\n");
    printf("👤 PERSONAGENS DA NOSSA TERRA\n");
    printf("=========================================\n\n");
    printf("• Fundador: [NOME]\n");
    printf("• Primeiro prefeito: [NOME]\n");
    printf("• Moradores que ajudaram a construir a cidade: [NOMES]\n\n");
    printf("Pressione ENTER para voltar ao menu...");
    getchar();
}

void mostrarFestas() {
    system("cls");
    printf("=========================================\n");
    printf("🎉 FESTAS E TRADIÇÕES\n");
    printf("=========================================\n\n");
    printf("• Festa do padroeiro: [DATA E NOME]\n");
    printf("• Festa do município: [DATA]\n");
    printf("• Outras tradições: [DESCREVA AQUI]\n\n");
    printf("Pressione ENTER para voltar ao menu...");
    getchar();
}

int main() {
    int opcao;
    
    do {
        system("cls");
        printf("=========================================\n");
        printf("📖 MEMÓRIA DE LEBON RÉGIS\n");
        printf("Preservando nossa história\n");
        printf("=========================================\n\n");
        printf("1. 🏙️ Pontos Históricos\n");
        printf("2. 👤 Personagens da Nossa Terra\n");
        printf("3. 🎉 Festas e Tradições\n");
        printf("0. ❌ Sair\n\n");
        printf("Escolha uma opção: ");
        
        scanf("%d", &opcao);
        getchar();
        
        switch(opcao) {
            case 1:
                mostrarPontosHistoricos();
                break;
            case 2:
                mostrarPersonagens();
                break;
            case 3:
                mostrarFestas();
                break;
            case 0:
                printf("\nObrigado por preservar nossa história! 🤍\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
                printf("Pressione ENTER para continuar...");
                getchar();
        }
    } while(opcao != 0);
    
    return 0;
}

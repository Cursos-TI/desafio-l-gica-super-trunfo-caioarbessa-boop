#include <stdio.h>

int main() {
    // Variáveis das cartas
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_percapita1, pib_percapita2;

    // Cadastro da Carta 1
    printf("=== Cadastro Carta 01 ===\n");
    printf("Cidade: "); scanf(" %49[^\n]", nome1);
    printf("População: "); scanf("%d", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (milhões): "); scanf("%f", &pib1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro Carta 02 ===\n");
    printf("Cidade: "); scanf(" %49[^\n]", nome2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (milhões): "); scanf("%f", &pib2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_percapita1 = (pib1 * 1e6) / populacao1;
    pib_percapita2 = (pib2 * 1e6) / populacao2;

    // Menu dinâmico
    int opcao1, opcao2;
    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - PIB per capita\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);
    printf("Escolha o segundo atributo (para desempate): ");
    scanf("%d", &opcao2);

    // Função para pegar o valor de cada atributo
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;

    // Atribuição dinâmica (1º atributo)
    valor1_carta1 = (opcao1 == 1) ? populacao1 :
                    (opcao1 == 2) ? area1 :
                    (opcao1 == 3) ? pib1 :
                    (opcao1 == 4) ? pib_percapita1 :
                    (1 / densidade1);  // inverso para densidade (menor vence)

    valor1_carta2 = (opcao1 == 1) ? populacao2 :
                    (opcao1 == 2) ? area2 :
                    (opcao1 == 3) ? pib2 :
                    (opcao1 == 4) ? pib_percapita2 :
                    (1 / densidade2);

    // Atribuição dinâmica (2º atributo)
    valor2_carta1 = (opcao2 == 1) ? populacao1 :
                    (opcao2 == 2) ? area1 :
                    (opcao2 == 3) ? pib1 :
                    (opcao2 == 4) ? pib_percapita1 :
                    (1 / densidade1);

    valor2_carta2 = (opcao2 == 1) ? populacao2 :
                    (opcao2 == 2) ? area2 :
                    (opcao2 == 3) ? pib2 :
                    (opcao2 == 4) ? pib_percapita2 :
                    (1 / densidade2);

    // Comparação dupla (aninhada e com operador ternário)
    char *vencedor =
        (valor1_carta1 > valor1_carta2) ? nome1 :
        (valor1_carta2 > valor1_carta1) ? nome2 :
        (valor2_carta1 > valor2_carta2) ? nome1 :
        (valor2_carta2 > valor2_carta1) ? nome2 : "Empate";

    printf("\n=== RESULTADO ===\n");
    if (vencedor == "Empate")
        printf("Empate entre %s e %s!\n", nome1, nome2);
    else
        printf("A cidade vencedora é: %s\n", vencedor);

    return 0;
}

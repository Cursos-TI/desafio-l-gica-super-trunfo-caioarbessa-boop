#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Variáveis para a primeira carta:
    char estado1[2], codigo1[4], nome_da_cidade1[50];
    int populacao1;
    float area_em_km1, densidade1;

    // Variáveis para a segunda carta:
    char estado2[2], codigo2[4], nome_da_cidade2[50];
    int populacao2;
    float area_em_km2, densidade2;

    // Dados de entrada para a primeira carta
    printf("Cadastro Carta 01\n");
    printf("Digite o nome do Estado (ex: A-H): \n");
    scanf("%1s", estado1);
    printf("Digite o código da carta (ex: A01): \n");
    scanf("%3s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área em kilometros quadrados: \n");
    scanf("%f", &area_em_km1);

    // Dados de entrada para a segunda carta
    printf("\nCadastro Carta 02\n");
    printf("Digite o nome do Estado (ex: A-H): \n");
    scanf("%1s", estado2);
    printf("Digite o código da carta (ex: A01): \n");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área em kilometros quadrados: \n");
    scanf("%f", &area_em_km2);

    // Calcular densidade populacional
    densidade1 = populacao1 / area_em_km1;
    densidade2 = populacao2 / area_em_km2;

    printf("\n--- Comparação de Densidade Populacional ---\n");
    printf("%s: %.2f hab/km²\n", nome_da_cidade1, densidade1);
    printf("%s: %.2f hab/km²\n", nome_da_cidade2, densidade2);

    // Determinar vencedora (maior densidade perde)
    if(densidade1 > densidade2) {
        printf("A cidade vencedora é: %s\n", nome_da_cidade2);
    } else if(densidade2 > densidade1) {
        printf("A cidade vencedora é: %s\n", nome_da_cidade1);
    } else {
        printf("Empate! As duas cidades têm a mesma densidade.\n");
    }

    return 0;
}

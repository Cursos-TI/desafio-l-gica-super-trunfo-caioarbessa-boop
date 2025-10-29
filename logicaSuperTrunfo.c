#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Variáveis para a primeira carta:
    char estado1[1], codigo1[4], nome_da_cidade1[50];
    int populacao1, n_pontos_turisticos1;
    float area_em_km1, pib1;

    // Variáveis para a segunda carta carta:
    char estado2[1], codigo2[4], nome_da_cidade2[50];
    int populacao2, n_pontos_turisticos2;
    float area_em_km2, pib2;

    // Dados de entrada para a primeira carta:

    printf("Cadastro Carta 01\n");
    printf("Digite o nome do Estado (ex: A-H): \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em kilometros quadrados: \n");
    scanf("%f", &area_em_km1);

    printf("Digite o PIB do Estado: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &n_pontos_turisticos1);

    // Dados de entrada para a segunda carta:

    printf("Cadastro Carta 02\n");
    printf("Digite o nome do Estado (ex: A-H): \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em kilometros quadrados: \n");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB do Estado: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &n_pontos_turisticos2);

    printf("\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {

    //definição da Estrutura da Carta 1 e criação de variáveis:
    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int numeroPontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    //definição da Estrutura da Carta 2 e criação de variáveis:
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numeroPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

 

    //Implementando interação entre usuário e programa:
    printf("Desafio Super Trunfo - Cadastro de Cartas de Cidades\n Digite o estado da carta 1 usando o nome do estado de A a H: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 usando o código do estado com o código da cidade. A combinação forma o código da carta (ex: A01, B02): ");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", nomeCidade1);
    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da carta 1 em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &numeroPontosTuristicos1);
    printf("Digite o estado da carta 2 usando o nome do estado de A a H: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2 usando o código do estado com o código da cidade. A combinação forma o código da carta (ex: A01, B02): ");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", nomeCidade2);
    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da carta 2 em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &numeroPontosTuristicos2);

    //realizando operações para calcular a densidade populacional e o PIB per capita:
    densidadePopulacional1 = (float) populacao1 / area1;
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita1 = (float) pib1 / populacao1;
    pibPerCapita2 = (float) pib2 / populacao2;

    //Exibindo os dados das cartas cadastradas:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Código: %s\n", codigoCarta1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Código: %s\n", codigoCarta2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);


    return 0;
}

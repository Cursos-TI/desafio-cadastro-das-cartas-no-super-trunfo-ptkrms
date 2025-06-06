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
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numeroPontosTuristicos1;
    float densidadePopulacional1;
    double inversoDensidade1;
    float pibPerCapita1;

    //definição da Estrutura da Carta 2 e criação de variáveis:
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numeroPontosTuristicos2;
    float densidadePopulacional2;
    double inversoDensidade2;
    float pibPerCapita2;

    //declarando variavel super-poder
    float superPoder1;
    float superPoder2;

    //declarando variaveis de resultado:
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDensidadePopulacional;
    int resultadoPibPerCapita;
    int resultadoSuperPoder;

    //Implementando interação entre usuário e programa:
    printf("Desafio Super Trunfo - Cadastro de Cartas de Cidades\n Digite o estado da carta 1 usando o nome do estado de A a H: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 usando o código do estado com o código da cidade. A combinação forma o código da carta (ex: A01, B02): ");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", nomeCidade1);
    printf("Digite a população da carta 1: ");
    scanf("%lu", &populacao1);
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
    scanf("%lu", &populacao2);
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
    inversoDensidade1 = 1.0 / densidadePopulacional1;
    inversoDensidade2 = 1.0 / densidadePopulacional2;

    //calculando superpoder:
    superPoder1 = (float) (populacao1 + area1 + pib1 + numeroPontosTuristicos1 + inversoDensidade1 + pibPerCapita1);
    superPoder2 = (float) (populacao2 + area2 + pib2 + numeroPontosTuristicos2 + inversoDensidade2 + pibPerCapita2);

    //comparando os resultados:
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontosTuristicos = numeroPontosTuristicos1 > numeroPontosTuristicos2;
    resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2; // menor densidade é melhor
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;


    //Exibindo os dados das cartas cadastradas:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Código: %s\n", codigoCarta1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Código: %s\n", codigoCarta2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    //Exibindo os resultados das comparações:
    printf("Resultados (1 se a Carta 1 vence, 0 se a Carta 2 vence, exceto na densidade populacional):\n");
    printf("A população da carta 1 é maior que a da carta 2? %d\n", resultadoPopulacao);
    printf("A área da carta 1 é maior que a da carta 2? %d\n", resultadoArea);
    printf("O PIB da carta 1 é maior que o da carta 2? %d\n", resultadoPib);
    printf("O número de pontos turísticos da carta 1 é maior que o da carta 2? %d\n", resultadoPontosTuristicos);
    printf("A densidade populacional da carta 1 é menor que a da carta 2? %d\n", resultadoDensidadePopulacional);
    printf("O PIB per capita da carta 1 é maior que o da carta 2? %d\n", resultadoPibPerCapita);
    printf("O super poder da carta 1 é maior que o da carta 2? %d\n", resultadoSuperPoder);

    
    return 0;
}

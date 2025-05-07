#include <stdio.h>

int main() {
    
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;
    float inversoDensidade1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;
    float inversoDensidade2;

    // Inserindo dados da Carta 1
    printf("- Cadastro da Carta 1 -\n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número da População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Inserindo dados da Carta 2
    printf("\n- Cadastro da Carta 2 -\n");

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número da População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    //Calculo da Densidade populacional
    densidade1 = (float) populacao1 / area1; //Carta 1
    densidade2 = (float) populacao2 / area2; //Carta 2
    
    //Calculo do PIB per capita
    pibPerCapita1 = pib1 * 1000000000 / (float) populacao1; //Carta 1
    pibPerCapita2 = pib2 * 1000000000 / (float) populacao2; //Carta 2

    //Inverso da Densidade Populacional
    inversoDensidade1 = area1 / (float) populacao1;
    inversoDensidade2 = area2 / (float) populacao2;

    //Calculo do super poder
    superPoder1 = (float) populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pibPerCapita1 + inversoDensidade1; //Carta 1
    superPoder2 = (float) populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pibPerCapita2 + inversoDensidade2; //Carta 2

    //Comparação das cartas
    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPib = pib1 > pib2;
    int resultadoPontos = pontos1 > pontos2;
    int resultadoDensidade = densidade1 < densidade2 ; //Menor vence
    int resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2; 
    int resultadoSuperPoder = superPoder1 > superPoder2;

    // Exibindo as cartas
    printf("\n-> Carta 1 <- \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n-> Carta 2 <- \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    //Resultado das comparações
    printf("\n--> Comparação das Cartas: <--\n");
    printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);

    return 0;
}
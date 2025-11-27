#include <stdio.h>

int main() {

    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char nome1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char nome2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // Leitura Carta 1
    printf("Estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta 1: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade da Carta 1: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Area da Carta 1: ");
    scanf("%f", &area1);

    printf("PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos da Carta 1: ");
    scanf("%d", &pontos1);

    // Leitura Carta 2
    printf("Estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta 2: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade da Carta 2: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Area da Carta 2: ");
    scanf("%f", &area2);

    printf("PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos da Carta 2: ");
    scanf("%d", &pontos2);

    // Cálculos Carta 1
    float densidade1 = populacao1 / area1;
    float pibCapita1 = pib1 / populacao1;
    float superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibCapita1 + (1.0f / densidade1);

    // Cálculos Carta 2
    float densidade2 = populacao2 / area2;
    float pibCapita2 = pib2 / populacao2;
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibCapita2 + (1.0f / densidade2);


    // --- COMPARAÇÕES ---
    // Sem if — usando expressões booleanas (1 para vitória da carta 1, 0 para carta 2)

    int vitoriaPop = populacao1 > populacao2;
    int vitoriaArea = area1 > area2;
    int vitoriaPib = pib1 > pib2;
    int vitoriaPontos = pontos1 > pontos2;

    // Densidade → MENOR vence
    int vitoriaDensidade = densidade1 < densidade2;

    int vitoriaPibCapita = pibCapita1 > pibCapita2;
    int vitoriaSuperPoder = superPoder1 > superPoder2;


    // --- SAÍDA ---

    printf("\n\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", vitoriaPop);
    printf("Area: Carta 1 venceu (%d)\n", vitoriaArea);
    printf("PIB: Carta 1 venceu (%d)\n", vitoriaPib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", vitoriaPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vitoriaDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vitoriaPibCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", vitoriaSuperPoder);

    return 0;
}

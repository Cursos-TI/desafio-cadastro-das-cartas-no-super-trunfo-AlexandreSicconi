#include <stdio.h>

int main() {
    // Dados da Carta 1 - Belo Horizonte
    char estado1 = 'C';
    char codigo1[5] = "C03";
    char nomeCidade1[50] = "Belo Horizonte";
    int populacao1 = 2523000;
    float area1 = 331.4;
    float pib1 = 104.30;
    int pontosTuristicos1 = 20;

    // Dados da Carta 2 - Salvador
    char estado2 = 'D';
    char codigo2[5] = "D04";
    char nomeCidade2[50] = "Salvador";
    int populacao2 = 2887000;
    float area2 = 693.8;
    float pib2 = 63.26;
    int pontosTuristicos2 = 40;

    // Exibição dos dados da Carta 1
    printf("\n===== Dados da Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\n===== Dados da Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

    

    
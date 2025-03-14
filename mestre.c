#include <stdio.h>

int main () {

    char estado1, estado2;
    char codigo1 [8], codigo2 [8];
    char nome_da_cidade1[30], nome_da_cidade2[30];
    long unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    char carta1 [10], carta2 [10];
    
    printf("Digite uma letra de 'A' a 'H' representando um dos oitos estados:\n");
    scanf("%c", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04:\n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nome_da_cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %lu", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos1);

    float densidade_populacional1 = (float) populacao1/area1;
    float pib_per_capita1 = pib1/populacao1;
    float super_poder1 = (float) populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + pib_per_capita1 + (1/densidade_populacional1);

    //Início Carta 1

    printf("Carta 1: %s\n", carta1);
   
    printf("Estado: %c\n", estado1);
    
    printf("Código: %s\n", codigo1);
    
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    
    printf("População: %lu\n", populacao1);
    
    printf("Área: %f km²\n", area1);
    
    printf("PIB: %f bilhões de reais\n", pib1);
    
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);

    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);

    printf("PIB per capita: %.20f reais\n", pib_per_capita1);

    printf ("O Super Poder é: %.2f\n", super_poder1);

    //Início carta 2

    printf("Digite uma letra de 'A' a 'H' representando um dos oitos estados:\n");
    scanf(" %c", &estado2);

    printf ("Digite a letra do estado seguida de um número de 01 a 04:\n");
    scanf (" %s", codigo2);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %s", nome_da_cidade2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos2);

    float densidade_populacional2 = (float) populacao2/area2;
    float pib_per_capita2 = pib2/populacao2;
    float super_poder2 = (float) populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pib_per_capita2 + (1/densidade_populacional2);

    printf("Carta 2: %s\n", carta2);
   
    printf("Estado: %c\n", estado2);
    
    printf("Código: %s\n", codigo2);
    
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    
    printf("População: %lu\n", populacao2);
    
    printf("Área: %f km²\n", area2);
    
    printf("PIB: %f bilhões de reais\n", pib2);
    
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);

    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);

    printf("PIB per capita: %.20f reais\n", pib_per_capita2);

    printf ("O Super poder é: %.2f\n", super_poder2);

    //Comparação das duas cartas

    printf ("Comparação de cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
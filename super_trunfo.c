#include <stdio.h>

int main () {

    char estado;
    char codigo [4];
    char nome_da_cidade[20];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;
    
    printf("Digite uma letra de 'A' a 'H' representando um dos oitos estados:\n");
    scanf(" %c", &estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04:\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade);

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos);

    printf("Carta 1:\n");
   
    printf("Estado: %c\n", estado);
    
    printf("Código: %s\n", codigo);
    
    printf("Nome da cidade: %s\n", nome_da_cidade);
    
    printf("População: %d\n", populacao);
    
    printf("Área: %f km²\n", area);
    
    printf("PIB: %f bilhões de reais\n", pib);
    
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);


    printf("Digite uma letra de 'A' a 'H' representando um dos oitos estados:\n");
    scanf(" %c", &estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04:\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade);

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf(" %d", &numero_de_pontos_turisticos);

    printf("Carta 2:\n");
   
    printf("Estado: %c\n", estado);
    
    printf("Código: %s\n", codigo);
    
    printf("Nome da cidade: %s\n", nome_da_cidade);
    
    printf("População: %d\n", populacao);
    
    printf("Área: %f km²\n", area);
    
    printf("PIB: %f bilhões de reais\n", pib);
    
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

    return 0;

}
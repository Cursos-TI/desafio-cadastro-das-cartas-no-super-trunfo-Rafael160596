#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    // Variáveis da primeira carta
    char estado1, codigo1[20], nome1[50];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    float densidadepopulacional1, pibpercapta1;
    float superpoder1;

    // Variáveis da segunda carta
    char estado2, codigo2[20], nome2[50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    float densidadepopulacional2, pibpercapta2;
    float superpoder2;

    // Entrada de Dados - Carta 1
    printf("\n=== Carta 1 ===\n");

    printf("Digite a primeira letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome1); //comando para ler nomes compostos

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (KM²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

     // Cálculos
     densidadepopulacional1 = (float)populacao1 / area1; //converter população que e int pra float.
     pibpercapta1 = (pib1 * 1000000000.0f) / populacao1;
     superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapta1 + (1.0f / densidadepopulacional1);
 
    // Entrada de Dados - Carta 2
    printf("\n=== Carta 2 ===\n");

    printf("Digite a primeira letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome2);

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (KM²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

     // Cálculos
     densidadepopulacional2 = (float)populacao2 / area2; //converter população que e int pra float.
     pibpercapta2 = (pib2 * 1000000000.0f) / populacao2;
     superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + (1.0f / densidadepopulacional2);

         // Exibindo resultados - Carta 1
         printf("\n=== Carta 01 ===\n");
         printf("Estado: %c\n", estado1);
         printf("Código: %s\n", codigo1);
         printf("Nome da Cidade: %s\n", nome1);
         printf("População: %lu\n", populacao1);
         printf("Área: %.2f KM²\n", area1);
         printf("PIB: %.2f\n", pib1);
         printf("Pontos Turísticos: %d\n", pontosturisticos1);
         printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
         printf("PIB per Capita: %.2f\n", pibpercapta1);
         printf("Super Poder: %.2f\n", superpoder1);

        // Exibindo resultados - Carta 2
         printf("\n=== Carta 02 ===\n");
         printf("Estado: %c\n", estado2);
         printf("Código: %s\n", codigo2);
         printf("Nome da Cidade: %s\n", nome2);
         printf("População: %lu\n", populacao2);
         printf("Área: %.2f KM²\n", area2);
         printf("PIB: %.2f\n", pib2);
         printf("Pontos Turísticos: %d\n", pontosturisticos2);
         printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
         printf("PIB per Capita: %.2f\n", pibpercapta2);
         printf("Super Poder: %.2f\n", superpoder2);

             // Comparação de cartas
             printf("\n=== Comparação de Cartas ===\n");
             printf("(1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence)\n");
             printf("População: %d\n", populacao1 > populacao2 ? 1 : 0);
             printf("Área: %d\n", area1 > area2 ? 1 : 0);
             printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
             printf("Pontos Turísticos: %d\n", pontosturisticos1 > pontosturisticos2 ? 1 : 0);
             printf("Densidade Populacional: %d\n", densidadepopulacional1 < densidadepopulacional2 ? 1 : 0);
             printf("PIB per Capita: %d\n", pibpercapta1 > pibpercapta2 ? 1 : 0);
             printf("Super Poder: %d\n", superpoder1 > superpoder2 ? 1 : 0);

    return 0;
}

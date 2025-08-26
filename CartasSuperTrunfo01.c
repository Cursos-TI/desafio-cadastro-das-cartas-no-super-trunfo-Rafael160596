#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

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

    while (getchar() != '\n'); //limpar o buffer antes do fgets

    printf("Digite o nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin); //comando para ler nomes compostos
    nome1[strcspn(nome1, "\n")] = 0; // remove o '\n' final

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
     pibpercapta1 = (float)pib1 / populacao1;
     superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapta1 + (1.0f / densidadepopulacional1);
 
    // Entrada de Dados - Carta 2
    printf("\n=== Carta 2 ===\n");

    printf("Digite a primeira letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade (ex: A01, B03): ");
    scanf("%s", codigo2);

    while (getchar() != '\n'); //limpar o buffer antes do fgets

    printf("Digite o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0; // remove o '\n' final 

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
     pibpercapta2 = (float)pib2 / populacao2;
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
         printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional1);
         printf("PIB per Capita: %.2f reais \n", pibpercapta1);
         
        // Exibindo resultados - Carta 2
         printf("\n=== Carta 02 ===\n");
         printf("Estado: %c\n", estado2);
         printf("Código: %s\n", codigo2);
         printf("Nome da Cidade: %s\n", nome2);
         printf("População: %lu\n", populacao2);
         printf("Área: %.2f KM²\n", area2);
         printf("PIB: %.2f\n", pib2);
         printf("Pontos Turísticos: %d\n", pontosturisticos2);
         printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
         printf("PIB per Capita: %.2f reais \n", pibpercapta2);
         
             // Comparação de cartas
             printf("\n=== Comparação de Cartas ===\n");
             printf("1 para verdadeiro = Carta 1 vence / e 0 para falso = Carta 2 vence\n");

             printf("População: Carta 1 venceu ? (%d)\n", populacao1 > populacao2);
             printf("Area: Carta 1 venceu ? (%d)\n", area1 > area2);
             printf("PIB: Carta 1 venceu ? (%d)\n", pib1 > pib2);
             printf("Pontos Turísticos: Carta 1 venceu ? (%d)\n", pontosturisticos1 > pontosturisticos2);
             printf("Densidade Populacional: Carta 1 venceu ? (%d)\n", densidadepopulacional1 < densidadepopulacional2);
             printf("PIB per Capita: Carta 1 venceu ? (%d)\n", pibpercapta1 > pibpercapta2);
             printf("Super Poder: Carta 1 venceu ? (%d)\n", superpoder1 > superpoder2);          
 return 0;
}

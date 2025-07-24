#include <stdio.h>

int main(){
     
 //Declarando variaveis da primeira carta.  
 char estado,codigo[50];
 char nome[50];
 int populacao, pontosturisticos;
 float area, PIB;

 //Declarando variaveis da segunda carta.  
 char estado2,codigo2[50];
 char nome2[50];
 int populacao2, pontosturisticos2;
 float area2, PIB2;

     //Entrada de dados com a interação com usuario Carta01.
     printf("Carta 01: \n");
     printf("Digite a primeira letra do estado de sua carta: \n");
     scanf(" %c", &estado);

     printf("Digite o codigo da cidade começando com a primeira letra do estado escolhido EX(F02): \n");
     scanf("%s", codigo);

     printf("Digite o nome de sua cidade escolhida: \n");
     scanf(" %49[^\n]", nome);

     printf("Digite sua populacao: \n");
     scanf("%d", &populacao);

     printf("Digite sua area KM² ex(0000.00): \n");
     scanf("%f", &area);

     printf("Digite seu PIB ex(000.00): \n");
     scanf("%f", &PIB);

     printf("Digite sua quantidade de pontos turisticos:   \n");
     scanf("%d", &pontosturisticos);

     //Entrada de dados com a interação com usuario Carta02.
     printf("Carta 02: \n");
     printf("Digite a primeira letra do estado de sua carta: \n");
     scanf(" %c", &estado2);

     printf("Digite o codigo da cidade começando com a primeira letra do estado escolhido EX(F02): \n");
     scanf("%s", codigo2);

     printf("Digite o nome de sua cidade escolhida: \n");
     scanf(" %49[^\n]", nome2);

     printf("Digite sua populacao: \n");
     scanf("%d", &populacao2);

     printf("Digite sua area KM² ex(0000.00): \n");
     scanf("%f", &area2);

     printf("Digite seu PIB ex(000.00): \n");
     scanf("%f", &PIB2);

     printf("Digite sua quantidade de pontos turisticos:   \n");
     scanf("%d", &pontosturisticos2);

        //Exibindo resultados Carta 01 (saida dos dados).
         printf("Carta 01: \n");
         printf("Estado: %c \n", estado);
         printf("Codigo: %s \n", codigo);
         printf("Nome da Cidade: %s \n", nome);
         printf("Populacao: %d \n", populacao);
         printf("Area: %.2f KM² \n", area);
         printf("PIB: %.2f \n", PIB);
         printf("Número de Pontos Turísticos: %d \n\n", pontosturisticos);
         
        //Exibindo resultados Carta 02 (saida dos dados).
         printf("Carta 02: \n");
         printf("Estado: %c \n", estado2);
         printf("Codigo: %s \n", codigo2);
         printf("Nome da Cidade: %s \n", nome2);
         printf("Populacao: %d \n", populacao2);
         printf("Area: %.2f KM² \n", area2);
         printf("PIB: %.2f \n", PIB2);
         printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

return 0;
    }
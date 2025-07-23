#include <stdio.h>

int main(){ 
    //Declarando variaveis da primeira carta.  
    char estado,codigo[50];
    char nome[50];
    int população, pontos;
    float area, PIB;

    //Declarando variaveis da segunda carta.  
    char estado2,codigo2[50];
    char nome2[50];
    int população2, pontos2;
    float area2, PIB2;

     //Entrada de dados com a interação com usuario Carta01.
     printf("Carta 01: \n");
     printf("Digite a primeira letra do estado de sua carta: \n");
     scanf(" %c", &estado);

     printf("Digite o codigo da cidade começando com a primeira letra do estado escolhido EX(F02): \n");
     scanf("%s", codigo);

     printf("Digite o nome de sua cidade escolhida: \n");
     scanf("%s", nome);

     printf("Digite sua população: \n");
     scanf("%d", &população);

     printf("Digite sua area KM²: \n");
     scanf("%f", &area);

     printf("Digite seu PIB: \n");
     scanf("%f", &PIB);

     printf("Digite sua quantidade de pontos turisticos: \n");
     scanf("%d", &pontos);

     //Entrada de dados com a interação com usuario Carta02.
     printf("Carta 02: \n");
     printf("Digite a primeira letra do estado de sua carta: \n");
     scanf(" %c", &estado2);

     printf("Digite o codigo da cidade começando com a primeira letra do estado escolhido EX(F02): \n");
     scanf("%s", codigo2);

     printf("Digite o nome de sua cidade escolhida: \n");
     scanf("%s", nome2);

     printf("Digite sua população: \n");
     scanf("%d", &população2);

     printf("Digite sua area KM²: \n");
     scanf("%f", &area2);

     printf("Digite seu PIB: \n");
     scanf("%f", &PIB2);

     printf("Digite sua quantidade de pontos turisticos: \n");
     scanf("%d", &pontos2);

        //Exibindo resultados Carta 01 (saida dos dados).
         printf("Carta 01: \n");
         printf("Estado: %c \n", estado);
         printf("Codigo: %s \n", codigo);
         printf("Nome: %s \n", nome);
         printf("População: %d \n", população);
         printf("Area: %f \n", area);
         printf("PIB: %f \n", PIB);
         printf("Pontos Turisticos: %d \n", pontos);
         
        //Exibindo resultados Carta 02 (saida dos dados).
         printf("Carta 02: \n");
         printf("Estado: %c \n", estado2);
         printf("Codigo: %s \n", codigo2);
         printf("Nome: %s \n", nome2);
         printf("População: %d \n", população2);
         printf("Area: %f \n", area2);
         printf("PIB: %f \n", PIB2);
         printf("Pontos Turisticos: %d \n", pontos2);

return 0;
    }
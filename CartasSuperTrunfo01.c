#include <stdio.h>

int main(){ //Declarando variaveis.  

    char estado;  // Estado.
    char codigo[3]; //Codigo da carta.
    char nome[10]; //Nome da cidade.
    int população; //População da cidade.
    float area; //Area em Km² (decidi trabalhar com o double aceita mais valores =)
    float PIB; //Produto Interno Bruto.
    int pontos; //Pontos turisticos da cidade.

    //Entrada de dados com a interação com usuario
    printf("Digite a primeira letra do estado de sua carta: \n");
    scanf("%c", &estado);

    printf("Digite o codigo da cidade começando com a primeira letra do estado escolhido EX(F02): \n");
    scanf("%s", &codigo);

    printf("Digite o nome de sua cidade escolhida: \n");
    scanf("%s", &nome);

    printf("Digite sua população: \n");
    scanf("%d", &população);

    printf("Digite sua area: \n");
    scanf("%f", &area);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB);

    printf("Digite sua quantidade de pontos turisticos: ");
    scanf("%d", &pontos);

    printf(" Carta 01: \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Populução: %d\n", população);
    printf("Area: %f KM²\n", area);
    printf("PIB: %f \n", PIB);
    printf("Pontos Turisticos: %d\n", pontos);
    
    }
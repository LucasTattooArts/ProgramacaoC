#include <stdio.h>

int main(){

//Determinação das variáveis
    char Estado1, Estado2;
    char Codigo1 [4], Codigo2 [4];
    char Nome1[50], Nome2[50];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PtTuristico1, PtTuristico2;

//Entrada de Dados Carta 1
    printf("Dados da Carta 1 \n");
    printf("Digite uma letra de A a H (representando um dos oito estados): \n");
    scanf ("%c", &Estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf ("%s", Codigo1);
    getchar();
    printf("Digite o nome da cidade: \n");
    fgets(Nome1, 50, stdin);
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &Populacao1);
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &Area1);
    printf("Digite o Produto Interno Bruto (PIB) da Cidade em bilhões de reais: \n");
    scanf("%f", &PIB1);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &PtTuristico1);
    getchar();
    printf ("\n");
//Saida de Dados da Carta 1
    printf("Carta 1: \n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Codigo1);
    printf("Nome da Cidade: %s", Nome1);
    printf("População: %d \n", Populacao1);
    printf("Área: %.2f km² \n", Area1);
    printf("PIB:R$ %.2f bilhões \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", PtTuristico1);
    printf("\n");

//Entrada de Dados Carta 2
    printf("Dados da Carta 2 \n");
    printf("Digite uma letra de A a H (representando um dos oito estados): \n");
    scanf ("%c", &Estado2);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf ("%s", Codigo2);
    getchar();
    printf("Digite o nome da cidade: \n");
    fgets(Nome2, 50, stdin);
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &Populacao2);
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &Area2);
    printf("Digite o Produto Interno Bruto (PIB) da Cidade em bilhões de reais: \n");
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &PtTuristico2);
    getchar();
    printf ("\n");

//Saida de Dados da Carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", Codigo2);
    printf("Nome da Cidade: %s", Nome2);
    printf("População: %d \n", Populacao2);
    printf("Área: %.2f km² \n", Area2);
    printf("PIB: R$%.2f bilhões \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", PtTuristico2);

    return 0;
}

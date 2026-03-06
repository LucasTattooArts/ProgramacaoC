#include <stdio.h>

int main(){
    int Temperatura, Umidade, Estoque;
    printf("Qual a temperatura do Armazem em ºC?");
    scanf ("%i", &Temperatura);
    printf("Qual a porcentagem de umidade do ar?");
    scanf("%i", &Umidade);
    printf("Qual a quantidade de estoque disponível?");
    scanf("%i", &Estoque);
    printf("A temperatura no armazem é de %i ºC \n", Temperatura);
    printf("A porcentagem de umidade no ar do armazem é de %i % \n", Umidade);
    printf("O estoque do armazem é de %i unidades \n", Estoque);

    if (Temperatura>26){
        printf("A temperatura está muito alta! \n");
    }else if (Temperatura<15){
        printf("A temperatura está muito baixa!\n");
    }else{
        printf("A temperatura está OK. \n");
    }

    if (Umidade>90){
        printf("O ar está muito umido!\n");
    }else if (Umidade<20){
        printf("O ar está muito seco!\n");
    }else{
        printf("O ar está OK.\n");
    }

    if (Estoque<10){
        printf("O estoque está baixo\n"); 
    }else{
        printf("O estoque está OK.\n");
    }
    return 0;
}
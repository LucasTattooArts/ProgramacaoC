#include <stdio.h>

    int main(){
        float Idade;
        printf ("Qual é a sua idade? \n");
        scanf ("%f", &Idade);
        getchar();
        if (Idade>18){
            printf("Você é maior de idade \n");
        }else{
            printf("Você é menor de idade\n");
        }
    }
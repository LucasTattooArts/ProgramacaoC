#include <stdio.h>

int main(){

//Determinar as variáveis
    float Nota1, Nota2, Nota3, Media;

//Solicitar dados
    printf ("Declare a primeira nota: \n");
    scanf ("%f", &Nota1);
    printf ("Declare a segunda nota: \n");
    scanf ("%f", &Nota2);
    printf ("Declare a terceira nota: \n");
    scanf ("%f", &Nota3);

//Calcular a média
    Media = (Nota1 + Nota2 + Nota3)/3;

//Entregar o resultado
    printf ("A média das notas é igual a: %.2f \n", Media);

//Resultado lógico
    if (Media>7){
        printf ("Parabéns! Você está aprovado! \n");
    }else{
        printf ("Você está reprovado! \n"); 
    }

    return 0;
}
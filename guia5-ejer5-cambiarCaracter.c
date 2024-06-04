#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void cambiar(char palabra[], char letrauno, char letrados);
int main(){
    char frase[90], letrauno, letrados;
    printf("ingrese la frase: ");
    fgets(frase, 90, stdin);
    printf("ingrese un caracter: ");
    scanf(" %c", &letrauno);
    printf("ingrese otro caracter: ");
    scanf(" %c",&letrados);
    cambiar(frase, letrauno, letrados);
    printf("la frase cambiada es: %s\n", frase);
    return 0;
}
void cambiar(char palabra[], char letrauno, char letrados)
{
    int i, largo;
    largo = strlen(palabra);
    for (i = 0; i < largo; i++)
    {
        if (palabra[i] == letrauno)
        {
            palabra[i] = letrados;
           // break;
        }
    }
}
/*
Desarrolle un programa donde dada una cadena de caracteres(no superior a 100 
caracteres) y dos caracteres, imprima una cadena donde todas las ocurrencias del 
primer carácter hayan sido reemplazadas por el segundo. 
*/
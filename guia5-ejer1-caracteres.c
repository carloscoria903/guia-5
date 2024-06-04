#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void pedirFrase(char frase[]);
void contar(char frase[]);
int main(int argc, char *argv[])
{
    char frase[10];
    pedirFrase(frase);
    contar(frase);
    return 0;
}
void pedirFrase(char frase[])
{
    printf("ingrese la frase: ");
    fgets(frase, 200, stdin);
    printf("la frase es: %s\n ", frase);
}
void contar(char frase[])
{
    int i, palabras = 1;
    int largo = strlen(frase);

    for (i = 0; i < largo; i++)
    {
        if (frase[i] == ' ')
        {
            palabras++;
        }
    }

    printf("La cantidad de palabras es: %d\n", palabras);
}
/*
Ingresar por teclado una oración de hasta 200 caracteres. Se sabe que el
operador ingresa solo un caracter en blanco entre palabras. Imprimir por pantalla
la cantidad de palabras que tiene la oración.
*/
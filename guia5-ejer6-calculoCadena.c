#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void pedirFrase(char frase[]);
int contarVocales(char frase[]);
int contarConsonante(char frase[]);
void contar(char frase[]);
int main()
{
    char frase[100];
    pedirFrase(frase);
    printf("%s", frase);
    int cantidadVocales = contarVocales(frase);
    printf("las vocales %d: ", cantidadVocales);
    int cantidadConsonantes = contarConsonante(frase);
    printf("las consonantes %d: ", cantidadConsonantes);
    contar(frase);
    return 0;
}
void pedirFrase(char frase[])
{
    printf("Ingrese una oracion: ");
    fgets(frase, 99, stdin);
}
int contarVocales(char frase[])
{
    int i, vocales = 0;
    int largo = strlen(frase);

    for (i = 0; i < largo; i++)
    {
        char c = (frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            vocales++;
        }
    }
    return vocales;
}
int contarConsonante(char frase[])
{
    int i, conso = 0;
    int largo = strlen(frase);
    for (i = 0; i < largo; i++)
    {
        char c = (frase[i]);
        if ((c >= 'b' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            if (c != 'a' || c != 'e' || c != 'i' || c != 'o' || c != 'u' || c != 'A' || c != 'E' || c != 'I' || c != 'O' || c != 'U')
            {
                conso++;
            }
        }
    }
    return conso;
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
Solicitar al usuario que ingrese una oración y luego calcular:
a.  Cantidad de vocales en la oración
b.  Cantidad de consonantes
c.  Cantidad de palabras
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void pedirNombre(char nombreuno[], char nombredos[], char nombretres[]);
void cambiar(char palabra[]);
void ordenar(char nombreuno[], char nombredos[], char nombretres[]);
int main()
{
    char nombreuno[50], nombredos[50], nombretres[50];
    pedirNombre(nombreuno, nombredos, nombretres);
    cambiar(nombreuno);
    cambiar(nombredos);
    cambiar(nombretres);
    ordenar(nombreuno, nombredos, nombretres);
    return 0;
}
void pedirNombre(char nombreuno[], char nombredos[], char nombretres[])
{
    printf("ingrese un nombre \n");
    fgets(nombreuno, 50, stdin);
    printf("ingrese el segundo nombre \n");
    fgets(nombredos, 50, stdin);
    printf("ingrese el tercer nombre \n");
    fgets(nombretres, 50, stdin);
}
void cambiar(char palabra[])
{
    int i, largo;
    largo = strlen(palabra);
    for (i = 0; i < largo; i++)
    {
        if (palabra[i] == '\n')
        {
            palabra[i] = '\0';
            break;
        }
    }
}
void ordenar(char nombreuno[], char nombredos[], char nombretres[])
{
    char aux[50];
    if (strcmp(nombreuno, nombredos) > 0)
    {
        strcpy(aux, nombreuno);
        strcpy(nombreuno, nombredos);
        strcpy(nombredos, aux);
    }
    if (strcmp(nombreuno, nombretres) > 0)
    {
        strcpy(aux, nombreuno);
        strcpy(nombreuno, nombretres);
        strcpy(nombretres, aux);
    }
    if (strcmp(nombredos, nombretres) > 0)
    {
        strcpy(aux, nombredos);
        strcpy(nombredos, nombretres);
        strcpy(nombretres, aux);
    }
    printf("nombres ordenados %s, %s, %s", nombreuno, nombredos, nombretres);
}
/*
Cargar tres nombres por teclado. Generar un cuarto string que almacene los tres
nombres ingresados por teclado en orden alfabético separados por una coma
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void pedirNombre(char nombreuno[], char nombredos[]);
void masLargo(char nombreuno[],char nombredos[]);
void cambiar(char palabra[]);
int main()
{
    char nombreuno[200], nombredos[200];
    pedirNombre(nombreuno, nombredos);
    cambiar(nombreuno);
    cambiar(nombredos);
    masLargo(nombreuno, nombredos);
    getchar();
    return 0;
}
void pedirNombre(char nombreuno[], char nombredos[])
{
    printf("ingrese el primer nombre\n ");
    fgets(nombreuno, 200, stdin);
    printf("ingrese el segundo nombre\n ");
    fgets(nombredos, 200, stdin);
}
void masLargo(char nombreuno[], char nombredos[])
{
    int longi1, longi2;
    longi1 = strlen(nombreuno);
    longi2 = strlen(nombredos);
    if (longi1 > longi2)
    {
        printf("el nombre mas largo es '%s'\n ", nombreuno);
        printf("el nombre mas corto es '%s'\n ", nombredos);
    }
    else if (longi1 < longi2)
    {
        printf("el nombre mas largo es '%s'\n ", nombredos);
        printf("el nombre mas corto es '%s'\n ", nombreuno);
    } else{
        printf("los nombres tienen la misma cantidad de caracteres");
    }
}
void cambiar(char palabra[]){
    int i, largo;
    largo = strlen(palabra);
    for (i = 0 ; i < largo; i++){
        if(palabra[i] == '\n'){
            palabra[i] = '\0';
            break;
        }
    }
}
/*
Ingresar por teclado dos nombres de personas y luego mostrarlas primero el que
tiene más caracteres y luego el que tiene menos.

*/
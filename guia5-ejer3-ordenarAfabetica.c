#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void pedirNombre(char nombreuno[], char nombredos[]);
void cambiar(char palabra[]);
void ordenar();
int main()
{
    char nombreuno[50], nombredos[50];
    pedirNombre(nombreuno, nombredos);
    cambiar(nombreuno);
    cambiar(nombredos);
    ordenar(nombreuno, nombredos);
    return 0;
}
void pedirNombre(char nombreuno[], char nombredos[])
{
    printf("ingrese el primer nombre\n ");
    fgets(nombreuno, 50, stdin);
    printf("ingrese el segundo nombre\n ");
    fgets(nombredos, 50, stdin);
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
void ordenar(char nombreuno[], char nombredos[]){
    int orden = strcmp(nombreuno, nombredos);
    if(orden == 0){
        printf("los nombres son iguales ");
    }else if(orden > 0) {
        printf("los nombre ordenados %s, %s ", nombredos, nombreuno);
    }
    else{
        printf("los nombres ordenados  %s, %s ", nombreuno, nombredos);
    }
}
/*
Ingresar por teclado dos nombres de personas y luego mostrarlas ordenados
alfabéticamente
*/
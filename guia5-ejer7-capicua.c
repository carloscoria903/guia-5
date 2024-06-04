#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void pedirFrase(char frase[]);
void eliminarCracterEspecial(char palabra[]);
void capicua(char frase[]);
int main(){
    char frase[100];
    pedirFrase(frase);
    eliminarCracterEspecial(frase);
    capicua(frase);
    return 0;
}
void pedirFrase(char frase[]){
    printf("Ingrese una frase: ");
    fgets(frase, 100, stdin);
    printf("La frase ingresada es: %s\n", frase);
}

void eliminarCracterEspecial(char palabra[]){
    int i, largo;
    largo = strlen(palabra);
    for (i = 0 ; i < largo; i++){
        if(palabra[i] == '\n'){
            palabra[i] = '\0';
            break;
        }
    }
}
void capicua(char frase[]){
    int i, len = strlen(frase);
    for(i=0; i < len / 2; i++){
        if(frase[i] !=  frase[len- i - 1]){
            printf("La frase no es capicua\n");
            return;
        }
    }
    printf("La frase es capicua\n");
}
/*
Escriba un programa que indique si una palabra tecleada por el usuario es 
palíndroma(capicúa). Ejemplos: oro, erre, solos.
*/
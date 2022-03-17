//
// Created by picha on 14/03/2022.
//
#include<stdio.h>
#include<string.h>

char funcionRecursiva( char cadena[100], int pos, int tam);

int main(){
    char arreglo[100];
    int resultado;
    int tamanio;

    printf("Ingrese la cadena:\n");
    scanf("%[^\n]", arreglo);
    tamanio= strlen(arreglo);
    printf("El tamanio es: %i\n", tamanio);



    resultado = funcionRecursiva(arreglo, 0, tamanio);
    printf("El resultado es %i", resultado);
}
char funcionRecursiva(char cadena[100], int pos, int tam){

    if(pos <= tam/ 2){
        if(cadena[pos] == cadena[tam - pos - 1]) {
            printf("Es igual %c que %c\n", cadena[pos], cadena[tam - pos - 1]);
            funcionRecursiva(cadena, pos + 1, tam);

            return 1;
        }

    }
    return 0;
}


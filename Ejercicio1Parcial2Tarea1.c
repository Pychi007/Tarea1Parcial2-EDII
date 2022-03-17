//
// Created by picha on 14/03/2022.
//
#include<stdio.h>
#include<string.h>
char funcionCiclos(int tamanio, char cadena[100]);

int main(){
    char arreglo[100];
    int tam;
    int resultado;
    int x;

    printf("Ingrese la cadena:\n");
    scanf("%[^\n]", arreglo);
    tam= strlen(arreglo);



    resultado = funcionCiclos(tam, arreglo);
    printf("El resultado es %i", resultado);
}

char funcionCiclos(int tamanio, char cadena[100]){
    printf("El tamanio de la cadena es: %i\n", tamanio);
    printf("La cadena es: %s\n", cadena);
    int posicion;
    int cont=0;
    int resultado;

        for (posicion = 0; posicion <= tamanio / 2; posicion++) {
            if (cadena[posicion] == cadena[tamanio - posicion - 1]) {
                printf("Es igual %c que %c\n", cadena[posicion], cadena[tamanio - posicion - 1]);
                cont=cont+1;
            }
        }
        if (cont==(tamanio+1)/2)
            resultado=1;

        if (cont != (tamanio+1)/2)
            resultado=0;

    return resultado;

}
//
// Created by picha on 16/03/2022.
//

#include <stdio.h>

void imprimefibbonaci(int secuencia, int ant1, int ant2, int fibo);
int main(){
    int n;
    printf("Escribra F(n): ");
    scanf("%i",&n);
    printf("1\n");

    imprimefibbonaci(n,1,1,1);
}
void imprimefibbonaci(int secuencia, int ant1, int ant2, int fibo) {
    if (secuencia > 1) {
        printf("%i\n", fibo);
        fibo = ant1 + ant2;
        ant1 = ant2;
        ant2 = fibo;
        imprimefibbonaci(secuencia - 1, ant1, ant2, fibo);
    }

}

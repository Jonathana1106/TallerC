//
// Created by Jonathan on 06/06/2019.
//
#include <stdio.h>
#include <stdlib.h>

int cantidad = 1;

/**
 * Metodo que recibe un numero entero y le calcula la cantidad de digitos que tiene.
 * @param num Numero al que se desea calcular la cantidad de digitos.
 */
void calCantDig(int num) {
    if (num == 0) {
        printf("La cantidad de digitos es: 0 \n");
    } else if (num / 10 > 0) {
        num = num / 10;
        cantidad = cantidad + 1;
        calCantDig(num);
    } else {
        printf("La cantidad de digitos es: ");
        printf("%d\n", cantidad);
    }
}
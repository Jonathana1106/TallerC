//
// Created by Jonathan on 06/06/2019.
//

#include <stdio.h>
#include <stdlib.h>

/**
 * Metodo que convierte a millas los kilometros del 1 al 10.
 */
void convertMK() {
    float millas;
    for (int i = 1; i <= 10; i++) {

        millas = i * 1.609;
        printf("La cantidad de kilometros ");
        printf("%d", i);
        printf(" en millas es: ");
        printf("%f", millas);
        printf("\n");
    }
}
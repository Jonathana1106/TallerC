//
// Created by Jonathan on 06/06/2019.
//

#include <stdio.h>
#include <stdlib.h>

/**
 * Metodo que concatena dos frases.
 * @param dest puntero de la primera lista de chars a concatenar.
 * @param src puntero de la segunda lista de chara a concatenar.
 */
void strCat(char *dest, char *src) {
    int i;
    int j;

    for (i = 0; *(dest + i) != '\0'; i++) {
        continue;
    }

    for (j = 0; *(src + j) != '\0'; j++) {
        *(dest + j + i) = *(src + j);
    }

    *(dest + j + i) = '\0';

    for (int i = 0; *(dest + i) != '\0'; i++) {
        printf("%c", *(dest + i));
    }
    printf("\n");
}
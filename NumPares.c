//
// Created by Jonathan on 06/06/2019.
//

#include <stdio.h>
#include <stdlib.h>

/**
 * Metodo que cuenta la cantidad de numeros pares en un numero dado.
 * @param numero
 * @param cantidad
 * @return Retorna la cantidad de numeros pares.
 */
int cantNumPar(int numero, int cantidad) {
    int resto = 0;
    int modulo = 0;

    resto = numero % 10;
    modulo = resto % 2;

    if (numero / 10 > 0) {
        if (modulo == 0) {
            cantidad = cantidad + 1;
            numero = numero / 10;
            cantNumPar(numero, cantidad);
        } else {
            numero = numero / 10;
            cantNumPar(numero, cantidad);
        }
    } else {
        printf("La cantidad de numeros pares es: ");
        printf("%d\n", cantidad);
    }
}

/**
 * Metpdo que recibe un numero al que se le desea calcular la cantidad de numeros pares.
 * @param numero al que se le desea conocer la cantidad de numeros pares que contine.
 * @return Llama a otro metodo auxiliar.
 */
int numPar(int numero) {
    return cantNumPar(numero, 0);
}
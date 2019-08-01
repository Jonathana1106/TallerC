//
// Created by Jonathan on 06/06/2019.
//

#include <stdio.h>
#include <stdlib.h>

/**
 * Metodo que recibe un temperatura en Fahrenheit y la convierte a Celsius.
 * @param farenheit Temperatura a convertir.
 */
void convertFC(float farenheit) {
    float celsius;
    celsius = (farenheit - 32) * (0.55555);
    printf("%f", farenheit);
    printf(" Farenheit convertidos son: ");
    printf("%f", celsius);
    printf(" grados Celsius.");
}

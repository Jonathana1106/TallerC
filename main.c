#include <stdio.h>
#include "MilesKm.c"
#include "FahrenheitCelsius.c"
#include "CantDigit.c"
#include "NumPares.c"
#include "CompString.c"
#include "ConcString.c"

int main() {

    printf("Ejercicio numero 1 \n");
    convertMK();
    printf("Ejercicio numero 2 \n");
    convertFC(45);
    printf("\n");
    printf("Ejercicio numero 3 \n");
    printf("La cantidad de digitos en 12346789 son: ");
    calCantDig(123456789);
    printf("Ejercicio numero 4 \n");
    printf("La cantidad de numeros pares en 123456789 son: ");
    numPar(123456789);
    printf("Ejercicio numero 5 \n");
    char s1[] = "hola\0";
    char p1[] = "hola\0";
    printf("Para s = hola y p = hola: %d\n", strCmp(s1, p1));
    char s2[] = "hola\0";
    char p2[] = "adios\0";
    printf("Para s = hola y p = adios: %d\n", strCmp(s2, p2));
    char s3[] = "adios\0";
    char p3[] = "adios\0";
    printf("Para s = adios y p = adios: %d\n", strCmp(s3, p3));
    printf("\n");
    printf("Ejercicio numero 6\n");
    char s4[] = "Jonathan\0";
    char p4[] = " Alberto\0";
    strCat(s4, p4);
    printf("\n");

    return 0;
}
#include <stdio.h>

// funcion suma
int suma (int a, int b) {
    return a + b;
}

// funcion resta
int resta (int a, int b) {
    return a - b;
}

// funcion multiplica
int multiplica (int a, int b) {
    return a * b;
}

// funcion divide
int divide (int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: NO PUEDES ENTRE 0\n");
        return 0; // Return 0 or handle error as needed
    }
}
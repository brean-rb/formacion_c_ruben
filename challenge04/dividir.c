#include <stdio.h>
#include "calc.h"

int division(int a, int b) {
    if (b == 0) {
        printf("Error: No se puede dividir por 0.\n");
        return 0; 
    } else {
        return a / b;
    }
}
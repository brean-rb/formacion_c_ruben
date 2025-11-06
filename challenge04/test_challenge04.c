#include <stdio.h>
#include <assert.h>
#include "calc.h"

void test_suma(){
    // Test 1: Suma de números positivos
    assert(suma(5, 3) == 8);

    // Test 2: Suma con cero
    assert(suma(0, 7) == 7);

    // Test 3: Suma con números negativos
    assert(suma(-2, -3) == -5);

    // Test 4: Suma de positivo y negativo
    assert(suma(10, -5) == 5);
};

//=========================================================================

//test resta

void test_resta(){
    // Test 1: Resta de números positivos
    assert(resta(5, 3) == 2);

    // Test 2: Resta con cero
    assert(resta(0, 7) == -7);

    // Test 3: Resta con números negativos
    assert(resta(-2, -3) == 1);

    // Test 4: Resta de positivo y negativo
    assert(resta(10, -5) == 15);
};

//=========================================================================

//test multiplica

void test_multiplica(){
    // Test 1: Multiplicación de números positivos
    assert(multiplicacion(5, 3) == 15);

    // Test 2: Multiplicación con cero
    assert(multiplicacion(0, 7) == 0);

    // Test 3: Multiplicación con números negativos
    assert(multiplicacion(-2, -3) == 6);

    // Test 4: Multiplicación de positivo y negativo
    assert(multiplicacion(10, -5) == -50);
};

//=========================================================================

//test divide

void test_divide(){
    // Test 1: División de números positivos
    assert(division(6, 3) == 2);

    // Test 2: División con negativo
    assert(division(6, -3) == -2);

    // Test 3: División de números negativos
    assert(division(-6, -3) == 2);

    // Test 4: División por cero
    assert(division(10, 0) == 0); 
};


int main() {
    test_suma();
    test_resta();
    test_multiplica();
    test_divide();
    return 0;
}

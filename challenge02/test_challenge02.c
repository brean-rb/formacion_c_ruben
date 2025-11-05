// test_challenge02.c
#include <stdio.h>
#include <assert.h>

//test suma
int suma (int a, int b);

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
int resta (int a, int b);

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
int multiplica (int a, int b);

void test_multiplica(){
    // Test 1: Multiplicación de números positivos
    assert(multiplica(5, 3) == 15);

    // Test 2: Multiplicación con cero
    assert(multiplica(0, 7) == 0);

    // Test 3: Multiplicación con números negativos
    assert(multiplica(-2, -3) == 6);

    // Test 4: Multiplicación de positivo y negativo
    assert(multiplica(10, -5) == -50);
};

//=========================================================================

//test divide
int divide (int a, int b);

void test_divide(){
    // Test 1: División de números positivos
    assert(divide(6, 3) == 2);

    // Test 2: División con negativo
    assert(divide(6, -3) == -2);

    // Test 3: División de números negativos
    assert(divide(-6, -3) == 2);

    // Test 4: División por cero
    assert(divide(10, 0) == 0); // Assuming the function returns 0 on division by zero
};

int main() {
    test_suma();
    test_resta();
    test_multiplica();
    return 0;
}

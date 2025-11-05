#include <stdio.h>
#include <assert.h>

// Función suma del archivo original
int suma(int a, int b);

// Función para ejecutar los tests
void test_suma() {
    // Test 1: Suma de números positivos
    assert(suma(5, 3) == 8);
    printf("Test 1 passed: 5 + 3 = 8\n");

    // Test 2: Suma con cero
    assert(suma(0, 7) == 7);
    printf("Test 2 passed: 0 + 7 = 7\n");

    // Test 3: Suma con números negativos
    assert(suma(-2, -3) == -5);
    printf("Test 3 passed: -2 + (-3) = -5\n");

    // Test 4: Suma de positivo y negativo
    assert(suma(10, -5) == 5);
    printf("Test 4 passed: 10 + (-5) = 5\n");

    printf("¡Todos los tests han pasado exitosamente!\n");
}

int main() {
    test_suma();
    return 0;
}

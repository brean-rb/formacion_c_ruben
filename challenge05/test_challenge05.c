#include <stdio.h>
#include <assert.h>

int suma(int a, int b);

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

int main() {
    test_suma();
    return 0;
}
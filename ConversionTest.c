#include "Conversion.h"
#include <assert.h>
#include <stdio.h>

void TestConversions() {
    const double tolerance = 0.001;

    // Pruebas para Celsius
    assert(AreNear(Celsius(32), 0, tolerance));
    assert(AreNear(Celsius(212), 100, tolerance));

    // Pruebas para Fahrenheit
    assert(AreNear(Fahrenheit(0), 32, tolerance));
    assert(AreNear(Fahrenheit(100), 212, tolerance));

    printf("Todas las pruebas pasaron exitosamente.\n");
}

int main() {
    TestConversions();
    return 0;
}

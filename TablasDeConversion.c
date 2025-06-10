#include <stdio.h>
#include "Conversion.h"

// Función genérica (nueva)
void PrintTabla(int lower, int upper, int step, double (*convertir)(double), const char* titulo1, const char* titulo2) {
    printf("%s\t\t%s\n", titulo1, titulo2);
    for(int temp = lower; temp <= upper; temp += step) {
        printf("%3d\t\t%6.1f\n", temp, convertir(temp));
    }
}

// Funciones originales (ahora implementadas usando la genérica)
void PrintTablaFahrenheit(int lower, int upper, int step) {
    PrintTabla(lower, upper, step, Celsius, "Fahrenheit", "Celsius");
}

void PrintTablaCelsius(int lower, int upper, int step) {
    PrintTabla(lower, upper, step, Fahrenheit, "Celsius", "Fahrenheit");
}

int main() {
    const int LOWER = 0;
    const int UPPER = 300;
    const int STEP = 20;
    
    printf("Tabla de Fahrenheit a Celsius:\n");
    PrintTablaFahrenheit(LOWER, UPPER, STEP);
    
    printf("\nTabla de Celsius a Fahrenheit:\n");
    PrintTablaCelsius(LOWER, UPPER, STEP);
    
    return 0;
}
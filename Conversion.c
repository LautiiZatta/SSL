#include "Conversion.h"
#include <math.h> // Para usar fabs

double Celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double Fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

bool AreNear(double a, double b, double tolerance) {
    return fabs(a - b) <= tolerance;
}

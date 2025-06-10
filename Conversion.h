#ifndef CONVERSION_H
#define CONVERSION_H

#include <stdbool.h>

double Celsius(double fahrenheit);
double Fahrenheit(double celsius);
bool AreNear(double a, double b, double tolerance);

#endif

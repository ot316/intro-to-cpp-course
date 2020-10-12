#include <iostream>
#include "conversions.h"

double celsius_of(double fahr)
{
	return (static_cast<double>(5)/9) * (fahr - 32);
}
/* END OF FUNCTION */

/* FUNCTION TO CONVERT FAHRENHEIT TO ABSOLUTE VALUE */
double absolute_value_of(double fahr)
{
	return ((static_cast<double>(5)/9) * (fahr - 32)) + 273.15;
}
/* END OF FUNCTION */

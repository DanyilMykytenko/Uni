#include <math.h>
#include "libModulesMykytenko.h"


int s_calculation(int x, int y, int z)
{
	double const Pi = 3.141592653589793;
	int s = pow(z + y + z, 2) - 2 * Pi * sqrt(1 / 3 * z);
	return s;
}

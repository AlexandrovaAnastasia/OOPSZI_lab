#include "math.h"
# define M_PI		3.14159265358979323846	/* pi */

 void func();
 double x, res;
void func(void)
{
	res = 2 * pow(sin(3 * M_PI - 2 * x), 2)*pow(cos(5 * M_PI + 2 * x), 2);
}
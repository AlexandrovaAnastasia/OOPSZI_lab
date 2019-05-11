#include <stdbool.h>
#include <math.h>

bool isInArea(double x, double y)
{
	if ((x >= -1 && x <= 1) && (y >= -1 && y <=  1) && (x <= y))
		return (1);
	else
		return (0);
}
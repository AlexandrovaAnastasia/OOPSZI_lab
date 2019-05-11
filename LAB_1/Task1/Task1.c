#include "stdio.h"
#include "math.h"
# define M_PI		3.14159265358979323846	/* pi */
void main()

{
	double x, y;
	x = 7;
	
	y = 2 * (pow(sin(3 * M_PI - 2 * x), 2)) * (pow(cos(5 * M_PI + 2 * x),2));

	printf("x = %.4f\ny = %.4f\n\n", x, y);
	
	printf("x = "); scanf("%lf", &x);
	y = sin(3 * M_PI - 2 * x);
	printf("y =%.4f\n ",y); 

	system ("pause");
}
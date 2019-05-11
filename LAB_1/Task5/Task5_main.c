#include "stdio.h"


double func(double x);

void main()
{
	double x, y;
	x = 7;
	y = func(x);
	printf("x = %.4f\ny = %.4f\n\n", x, y);

	printf("x = ");
	scanf("%lf", &x);
	y = func(x);
	printf("y = %.4f\n", y);

	system("pause");

}
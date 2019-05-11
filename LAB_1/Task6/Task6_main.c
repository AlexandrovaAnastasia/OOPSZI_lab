#define _CRT_SECURE_NO_WARNINGS


#include "stdio.h"
void func();
double x, res;

 void main()
{
	 x = 7;
	 printf("x = %.4f\n", x);
	 func();
	 printf("y = %.4f\n\n", res);
	printf("x = ");
	scanf("%lf", &x);
	func();
	printf("y = %.4f\n", res);

	system("pause");

}
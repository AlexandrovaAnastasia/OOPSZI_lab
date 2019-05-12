#include <math.h>
#include "head.h"
#include <locale.h>

void print_d_w(int n, int k)
{ 
	setlocale(LC_ALL, "RUS");
	int t = 1;
	int i = 0;

	do
	{
		if (t == k)
		{
			t = 1;
			i++;
			continue;
		}

		printf("Итерация: %d ", i+1 );
		printf(" Результат: %f\n", a(i) );
		
			t++;
			i++;
	} while (i < n);
	
}
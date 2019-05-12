#include <math.h>
#include "head.h"
#include <locale.h>

void print_for(int n, int k)
{ 
	setlocale(LC_ALL, "RUS");
	int t = 1;

	for (int i = 0; i < n; ++i)
	{
		if (t == k)
		{
			t = 1;
			continue;
		}

		printf("Итерация: %d ", i+1 );
		printf(" Результат: %f\n", a(i) );
		
			t++;

	}
}
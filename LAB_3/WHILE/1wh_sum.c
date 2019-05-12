#include <math.h>
#include "head.h"

double sum_wh(int n)
{
	int i = 0;
	double s,s1;
	s1 = 0;

	while (i <= (n - 1))
	{
		s = a(i);
		s1 += s;
		++i;
	} 
	
	

	return s1;
}
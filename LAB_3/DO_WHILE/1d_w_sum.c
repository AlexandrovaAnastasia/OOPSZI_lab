#include <math.h>
#include "head.h"

double sum_d_w(int n)
{
	int i = 0;
	double s,s1;
	s1 = 0;
	do
	{
		s = a(i);
		s1 += s;
		++i;
	} 
	while (i <= (n - 1));
	

	return s1;
}
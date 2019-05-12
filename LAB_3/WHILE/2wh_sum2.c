#include <math.h>
#include "head.h"

double sum2_wh(double eps)
{
	int i = 0;
	double s, s1,f;
	_Bool flag;
	s = 0; s1 = 0; f = 0; flag = 0;
	
	while (flag == 0)
	{

		s = a(i);
		f = fabs(s);
		s1 += s;

		if (f <= eps)
		{
			flag = 1;
			break;
		}
		else
			++i;
			continue;

	} 
	return s1;
}

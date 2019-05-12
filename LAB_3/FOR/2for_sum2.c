#include <math.h>
#include "head.h"

double sum2_for(double eps)
{
	double s, s1,f;
	_Bool flag;
	s = 0; s1 = 0; f = 0; flag = 0;
	
	for (int i = 0; flag == 0; i++)
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
			continue;
		
	}
	return s1;
}

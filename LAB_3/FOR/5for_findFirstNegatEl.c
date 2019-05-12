#include <math.h>
#include "head.h"

int findFirstNegatEl_for(double eps)
{ 
	double f;
	int i1 = 0;
	_Bool flag;
	flag = 0;

	for (int i = 0; flag == 0; ++i)

	{
		f = a(i);

		if (fabs(f) <= eps && f < 0)

		{
			i1 = i;
			flag = 1;
			break;
		}

		else
			continue;
	}

	return i1;
}
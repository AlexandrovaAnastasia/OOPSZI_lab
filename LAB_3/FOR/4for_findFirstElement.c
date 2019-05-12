#include <math.h>
#include "head.h"

int findFirstElement_for(double eps)
{
	double f=0;
	int i1 = 0;
	_Bool flag;
	flag = 0;

	for (int i = 0; flag == 0; ++i)

	{
		f = a(i);

		if (fabs(f) <= eps)

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
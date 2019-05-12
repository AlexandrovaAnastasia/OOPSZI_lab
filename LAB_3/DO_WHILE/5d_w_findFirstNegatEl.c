#include <math.h>
#include "head.h"

int findFirstNegatEl_d_w(double eps)
{
	int i = 0;
	double f;
	int i1 = 0;
	_Bool flag;
	flag = 0;

	do
	{
		f = a(i);

		if (fabs(f) <= eps && f < 0)

		{
			i1 = i;
			flag = 1;
			break;
		}

		else
			++i;
			continue;
	
	} while (flag == 0);
	
	return i1;
}
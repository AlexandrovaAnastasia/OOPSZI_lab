#include <math.h>
#include "head.h"

int findFirstElement_wh(double eps)
{
	int i = 0;
	double f=0;
	int i1 = 0;
	_Bool flag;
	flag = 0;

	while (flag == 0)
	{
		f = a(i);

		if (fabs(f) <= eps)

		{
			i1 = i;
			flag = 1;
			break;
		}

		else
			++i;
			continue;
		
	} 

	return i1;
}
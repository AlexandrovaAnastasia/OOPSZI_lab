#include <stdio.h>
#include <stdbool.h>
#include "head.h"
#include <locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");

	int k;
	

	while (true)
	{
		printf("\n\n1) ������� �1: ����� n ��������� \n");
		printf("2) ������� �2: ����� ���������, ������� ������ �� ������ ��������� �������� \n");
		printf("3) ������� �3: ����� n ������ ������������������, �� ����������� ������� k-��� \n");
		printf("4) ������� �4: ����� ������ ������� ����� ������������������, ������ �������� ������ ��������� �������� \n");
		printf("5) ������� �5: ����� ������ ������� �������������� ����� ������������������, ������ �������� ������ ��������� ��������\n");
		printf("\n������� ����� ������: ");
		scanf_s("%d", &k);

		switch (k)
		{
		case 1:

		{

			printf("\n\n������� 1\n ");
			int n;
			double a;
			printf("������� ����� n= ");
			scanf_s("%d", &n);
			a = sum_wh(n);
			printf("���������: %.15f\n", a);
			break;
		}

		case 2:

		{
			printf("\n\n������� 2\n ");
			double a1, eps;
			printf("������� �������� eps= ");
			scanf_s("%lf", &eps);
			a1 = sum2_wh(eps);
			printf("���������: %4f\n", a1);
			break;
		}

		case 3:

		{
			printf("\n\n������� 3\n ");
			int n1,k;
			printf("������� ����� n= ");
			scanf_s("%d", &n1);
			printf("������� ����� k= ");
			scanf_s("%d", &k);
			print_wh(n1, k);
			break;
		}
		case 4:

		{
			printf("\n\n������� 4\n ");
			int i;
			double eps;
			printf("\n\n������� �������� eps= ");
			scanf_s("%lf", &eps);
			i = findFirstElement_wh(eps);
			printf("���������: %d\n", i);
			break;
		}

		case 5:

		{
			printf("\n\n������� 5\n ");
			int i;
			double eps;
			printf("������� �������� eps= ");
			scanf_s("%lf", &eps);
			i = findFirstNegatEl_wh(eps);
			printf("���������: %d\n", i);
			break;
		}

		default:

		{
			printf("\n\n������ ������� �� ����������\n ");
			break;
		}
		
		}
	}
	return 0;
}
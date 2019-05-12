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
		printf("\n\n1) Задание №1: Сумма n слагаемых \n");
		printf("2) Задание №2: Сумма слагаемых, которые больше по модулю введенной точности \n");
		printf("3) Задание №3: Вывод n членов последовательности, за исключением каждого k-ого \n");
		printf("4) Задание №4: Вывод номера первого члена последовательности, модуль которого меньше введенной точности \n");
		printf("5) Задание №5: Вывод номера первого отрицательного члена последовательности, модуль которого меньше введенной точности\n");
		printf("\nВведите номер задачи: ");
		scanf_s("%d", &k);

		switch (k)
		{
		case 1:

		{

			printf("\n\nЗадание 1\n ");
			int n;
			double a;
			printf("Введите число n= ");
			scanf_s("%d", &n);
			a = sum_d_w(n);
			printf("Результат: %.15f\n", a);
			break;
		}

		case 2:

		{
			printf("\n\nЗадание 2\n ");
			double a1, eps;
			printf("Введите точность eps= ");
			scanf_s("%lf", &eps);
			a1 = sum2_d_w(eps);
			printf("Результат: %4f\n", a1);
			break;
		}

		case 3:

		{
			printf("\n\nЗадание 3\n ");
			int n1,k;
			printf("Введите число n= ");
			scanf_s("%d", &n1);
			printf("Введите число k= ");
			scanf_s("%d", &k);
			print_d_w(n1, k);
			break;
		}
		case 4:

		{
			printf("\n\nЗадание 4\n ");
			int i;
			double eps;
			printf("\n\nВведите точность eps= ");
			scanf_s("%lf", &eps);
			i = findFirstElement_d_w(eps);
			printf("Результат: %d\n", i);
			break;
		}

		case 5:

		{
			printf("\n\nЗадание 5\n ");
			int i;
			double eps;
			printf("Введите точность eps= ");
			scanf_s("%lf", &eps);
			i = findFirstNegatEl_d_w(eps);
			printf("Результат: %d\n", i);
			break;
		}

		default:

		{
			printf("\n\nТакого задания не существует\n ");
			break;
		}
		
		}
	}
	return 0;
}
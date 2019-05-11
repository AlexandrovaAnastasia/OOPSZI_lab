#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

bool isInArea(double, double);
double f(double);

int main()
{
	setlocale(LC_ALL, "RUS");

	int k;
	double x, y;

	while (true)
	{
		printf("Выбор номера задачи: \n");
		printf("1) Попадание в заштрихованную область введенных координат\n");
		printf("2) Вычисление выражения с условной операцией\n");
		printf("Введите номер задачи: ");
		scanf("%d", &k);

		switch (k)
		{
		case 1:
		{
			printf("\nВыполнение первого задания:\n");
			printf("Введите координаты x и y:\n");
			printf("Введите Х=");
			scanf("%lf", &x);
			printf("Введите Y=");
			scanf("%lf", &y);
			printf("Результат:%d\n\n", isInArea(x, y));
			break;
		}
		case 2:
		{
			printf("\n Выполнение второго задания:\n");
			printf("Введите x=");
			scanf("%lf", &x);
			printf("Результат: %f\n\n", f(x));
			break;
		}
		default:
			return 1;
		}
	}

	return 0;
}


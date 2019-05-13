#include <iostream>
#include <math.h>
#include <conio.h>
#include "LAB_4.h"
using namespace std;
void main()

{

	setlocale(LC_ALL, "Rus");

	int re, im;

	cout << "Введите \"Комплексное число\" в виде:\n-действительной\n-мнимой\nчастей комплексного числа:\nreal = ";

	cin >> re;

	cout << "imagine = ";

	cin >> im;

	Complex z(re, im);

	cout << "z = " << z;

	cout << "\nf(z) = 2z + sin (z - i)\nf(z) = (" << Complex(2, 0) * z << ") + (" << sin (z - Complex(0, 1)) << ") = "<< Complex(2, 0) * z + sin(z - Complex(0, 1)) ;

	_getch();

}

// Test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>
#include <math.h>
#define PLUSPLUS

using namespace std;


int main()
{
    setlocale(LC_ALL, "RUS");

    float a, b, c;

    #ifdef PLUSPLUS
	    cout << "Стороны треугольника=";
	    cin >> a >> b >> c;
		if (a < b + c and b < a + c and c < a + b)
		{
			float p = (a + b + c) / 2;
			double S = pow(p * (p - a) * (p - b) * (p - c), 0.5);
			cout << "Площадь треугольника со сторонами " << a << "," << b << "," << c << " = " << S << endl;
		}
		else
		{
			cout << "Треугольник с такими сторонами не существует" << endl;
		}
    #else
        printf_s("Cтороны треугольника=");
		scanf_s("%f %f %f", &a, &b, &c);
		if (a < b + c && b < a + c && c < a + b)
		{
			float p = (a + b + c) / 2;
			double S = pow(p * (p - a) * (p - b) * (p - c), 0.5);
			printf_s("Площадь треугольника со сторонами %g, %g, %g = %.3f.", a, b, c, S);
		}
		else
		{
			printf_s("Треугольник с такими сторонами не существует.\n");
		}
    #endif
        system("pause");
}

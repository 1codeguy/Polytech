#include <iostream>
#include <clocale>
#include <cmath>

int p(float a, float b, float c);
double s(float a, float b, float c);
void zona(float x, float y, int& zone);
double SUM(double l, double m, double eps);

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

    float a, b, c;

	cout << "Стороны треугольника=";
	cin >> a >> b >> c;
	if (a < b + c and b < a + c and c < a + b)
	{
		double S = s(a, b, c);
		cout << "Площадь треугольника со сторонами " << a << "," << b << "," << c << " = " << S << endl;
	}
    else
    {
        cout << "Треугольник с такими сторонами не существует" << endl;
    }

    float x, y;
    int zone;

    cout << "Введите координаты точки: ";
    cin >> x >> y;

    zona(x, y, zone);

    if (zone == 0)
        cout << "Пустая зона\n";
    else
        cout << "Точка принадлежит зоне " << zone << "\n";

    double l, m;
	cout << "Введите l и m: ";
    cin >> l >> m;
    double eps = 0.0001;

    double sum = SUM(l, m, eps);
    cout << sum << " " << pow(1 + l, m) << endl;

    system("pause");
    return 0;
}

int p(float a, float b, float c)
{
	return (a + b + c) / 2;
}
double s(float a, float b, float c)
{
	float P = p(a, b, c);
	return pow(P * (P - a) * (P - b) * (P - c), 0.5);
}

void zona(float x, float y, int& zone)
{
    float R = sqrt(x * x + y * y);
    float P = x * x - 1;
    float Q = x + 1;

    if (y >= P && y <= 1 && y >= Q && x <= 0 && y >= 0)
        zone = 23;
    else if (y >= P && y <= 1 && y <= Q && x <= 0 && y >= 0)
        zone = 22;
    else if (y <= 1 && y >= P && x <= 0 && y <= 0)
        zone = 21;
    else if (y <= 1 && y >= P && y <= 0 && x >= 0)
        zone = 20;
    else if (y <= 1 && y >= P && x >= 0 && y >= 0)
        zone = 19;
    else if (R <= 2 && y <= P && x >= 0 && y >= 0)
        zone = 18;
    else if (R <= 2 && y <= Q && y >= P && y >= 1)
        zone = 17;
    else if (R <= 2 && y >= P && y >= Q && x >= 0)
        zone = 16;
    else if (R <= 2 && y >= 1 && x <= 0 && y >= P)
        zone = 15;
    else if (R <= 2 && y <= P && y >= 0 && x <= 0 && y >= 1)
        zone = 14;
    else if (R <= 2 && y <= P && y >= 0 && x <= 0 && y <= 1)
        zone = 13;
    else if (R <= 2 && y <= P && y <= 0 && x <= 0 && y >= Q)
        zone = 12;
    else if (R <= 2 && y <= P && y <= 0 && x <= 0 && y <= Q)
        zone = 11;
    else if (R >= 2 && y <= 0 && x <= 0 && y <= Q)
        zone = 10;
    else if (R >= 2 && y <= 0 && x <= 0 && y >= Q)
        zone = 9;
    else if (R >= 2 && y <= P && y <= 1 && x <= 0 && y >= 0 && y >= Q)
        zone = 8;
    else if (R >= 2 && y <= P && y >= 1 && x <= 0 && y >= 0 && y >= Q)
        zone = 7;
    else if (R >= 2 && y >= P && y >= 1 && x <= 0 && y >= Q)
        zone = 6;
    else if (R >= 2 && y >= P && y >= 1 && x >= 0 && y >= 0 && y >= Q)
        zone = 5;
    else if (R >= 2 && y >= P && y >= 1 && x >= 0 && y >= 0 && y <= Q)
        zone = 4;
    else if (R >= 2 && y <= P && y >= 1 && x >= 0 && y >= 0)
        zone = 3;
    else if (R >= 2 && y <= P && y <= 1 && x >= 0 && y >= 0)
        zone = 2;
    else if (y <= P && x >= 0 && y <= 0)
        zone = 1;
    else
        zone = 0;
}

double SUM(double l, double m, double eps)
{
    double q = 1;
    double sum = 1;
    double n = 1;

    while (fabs(q) > eps)
    {
        q = q * l * (m - n + 1) / n;
        sum += q;
        n++;
    }
    return sum;
}
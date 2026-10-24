#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    float x, y, z, r, d, a, b, c, scalar, square_projection_length;
    cout << "Введите значения x, y, z:";
    cin >> x >> y >> z;
    a = x - 3;
    b = y - 3;
    c = z - 3;
    r = sqrt(a * a + b * b + c * c);
    scalar = 1 * a + 1 * b + 1 * c;
    square_projection_length = scalar * scalar / 3;
    d = sqrt(r * r - square_projection_length);
    if (r > 2)
        cout << "Точка принадлежит зоне 1\n";
    else if (d > 0.5)
        cout << "Точка принадлежит зоне 2\n";
    else
        cout << "Точка принадлежит зоне 3\n";
    
	system("pause");
}
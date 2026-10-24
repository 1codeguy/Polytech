#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    float x, y;
    cout << "Введите координаты точки:" << endl;
    cin >> x >> y;

    float R = sqrt(x * x + y * y);
    float P = x * x - 1;
    float Q = x + 1;

    if (y >= P && y <= 1 && y >= Q && x <= 0 && y >= 0)
    {
        cout << "Точка принадлежит 23 зоне" << endl;
    }
    else if (y >= P && y <= 1 && y <= Q && x <= 0 && y >= 0)
    {
        cout << "Точка принадлежит 22 зоне" << endl;
    }
    else if (y <= 1 && y >= P && x <= 0 && y <= 0)
    {
        cout << "Точка принадлежит 21 зоне" << endl;
    }
    else if (y <= 1 && y >= P && y <= 0 && x >= 0)
    {
        cout << "Точка принадлежит 20 зоне" << endl;
    }
    else if (y <= 1 && y >= P && x >= 0 && y >= 0)
    {
        cout << "Точка принадлежит 19 зоне" << endl;
    }
    else if (R <= 2 && y <= P && x >= 0 && y >= 0)
    {
        cout << "Точка принадлежит 18 зоне" << endl;
    }
    else if (R <= 2 && y <= Q && y >= P && y >= 1)
    {
        cout << "Точка принадлежит 17 зоне" << endl;
    }
    else if (R <= 2 && y >= P && y >= Q && x >= 0)
    {
        cout << "Точка принадлежит 16 зоне" << endl;
    }
    else if (R <= 2 && y >= 1 && x <= 0 && y >= P)
    {
        cout << "Точка принадлежит 15 зоне" << endl;
    }
    else if (R <= 2 && y <= P && y >= 0 && x <= 0 && y >= 1)
    {
        cout << "Точка принадлежит 14 зоне" << endl;
    }
    else if (R <= 2 && y <= P && y >= 0 && x <= 0 && y <= 1)
    {
        cout << "Точка принадлежит 13 зоне" << endl;
    }
    else if (R <= 2 && y <= P && y <= 0 && x <= 0 && y >= Q)
    {
        cout << "Точка принадлежит 12 зоне" << endl;
    }
    else if (R <= 2 && y <= P && y <= 0 && x <= 0 && y <= Q)
    {
        cout << "Точка принадлежит 11 зоне" << endl;
    }
    else if (R >= 2 && y <= 0 && x <= 0 && y <= Q)
    {
        cout << "Точка принадлежит 10 зоне" << endl;
    }
    else if (R >= 2 && y <= 0 && x <= 0 && y >= Q)
    {
        cout << "Точка принадлежит 9 зоне" << endl;
    }
    else if (R >= 2 && y <= P && y <= 1 && x <= 0 && y >= 0 && y >= Q)
    {
        cout << "Точка принадлежит 8 зоне" << endl;
    }
    else if (R >= 2 && y <= P && y >= 1 && x <= 0 && y >= 0 && y >= Q)
    {
        cout << "Точка принадлежит 7 зоне" << endl;
    }
    else if (R >= 2 && y >= P && y >= 1 && x <= 0 && y >= Q)
    {
        cout << "Точка принадлежит 6 зоне" << endl;
    }
    else if (R >= 2 && y >= P && y >= 1 && x >= 0 && y >= 0 && y >= Q)
    {
        cout << "Точка принадлежит 5 зоне" << endl;
    }
    else if (R >= 2 && y >= P && y >= 1 && x >= 0 && y >= 0 && y <= Q)
    {
        cout << "Точка принадлежит 4 зоне" << endl;
    }
    else if (R >= 2 && y <= P && y >= 1 && x >= 0 && y >= 0)
    {
        cout << "Точка принадлежит 3 зоне" << endl;
    }
    else if (R >= 2 && y <= P && y <= 1 && x >= 0 && y >= 0)
    {
        cout << "Точка принадлежит 2 зоне" << endl;
    }
    else if (y <= P && x >= 0 && y <= 0)
    {
        cout << "Точка принадлежит 1 зоне" << endl;
    }

    system("pause");
}
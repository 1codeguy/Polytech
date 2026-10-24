#include <iostream>
#include <locale>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int N;
    cout << "Введите количество элементов массива: ";
    cin >> N;

    if (N <= 0)
        return 0;

    int* names = new int[N];

    srand(time(NULL));

    for (int i = 0; i < N; i++)
        names[i] = rand() % 200 -100;

    cout << "Элементы массива:" << endl;

    for (int i = 0; i < N; i++)
    {
        cout << names[i] << " ";
    }
    cout << endl;

    int max_count = 0;

    for (int i = 0; i < N; i++) {
        int counter = 0;

        for (int j = i + 1; j < N; j++) {
            if (names[i] == names[j]) {
                counter++;
            }
        }

        if (counter > max_count && counter > 1)
            max_count = counter;
    }

    cout << "Чаще всего встречается ";

    for (int i = 0; i < N; i++) {
        int count = 0;
        bool point = false;

        for (int j = i + 1; j < N; j++)
            if (names[j] == names[i])
                count++;

        for (int j = 0; j < i; j++)
            if (names[j] == names[i])
                point = true;

        if (count == max_count && point == false)
            cout << names[i] << " ";
    }

    if (max_count == 0)
        cout << "нет повторяющихся элементов" << endl;
    else
        cout << "(" << max_count << ") раз" << endl;

    delete[] names;

    return 0;
}

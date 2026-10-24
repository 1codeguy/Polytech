#include <iostream>
#include <locale>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int N;
	cout << "Введите размер массива: ";
	cin >> N;
	int** names = new int*[N];
	for (int i = 0; i < N; i++) {
		names[i] = new int[N];
	}
	srand(time(NULL));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			names[i][j] = rand() % 100;
		}
	}
	cout << "Исходный массив: " << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << setw(5) << names[i][j];
		cout << endl;
	}
	for (int j = 0; j < N; j++) {
		int sum = 0;
		for (int i = 0; i < N; i++) {
			sum += names[i][j];
		}
		cout << "Сумма элементов столбца: " << sum << endl;
		if (sum % 2 == 0) {
			cout << "Сумма элементов столбца четная." << endl;
			for (int i = 0; i < N; i++)
				names[i][j] = 0;
		}
		else
			cout << "Сумма элементов столбца нечетная." << endl;
	}
	cout << "Измененный массив: " << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << setw(5) << names[i][j];
		cout << endl;
	}
	for (int i = 0; i < N; i++) {
		delete[] names[i];
	}
	delete[] names;
	system("pause");
}

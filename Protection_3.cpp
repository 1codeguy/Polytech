#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	for (int section = 2; section <= 7; section += 5) { 
		if (section > 2) {
			cout << endl << endl;
		}
		for (int i = 1; i <= 10; i++) {
			for (int j = section; j <= section + 4; j++) {
				cout << setw(2) << i << " * " << setw(2) << j << " = " << setw(2) << i * j << " ";
			}
			cout << endl;
		}
	}
	
	system("pause");
}
#include <iostream>
#include <fstream>
#include <ctime>

#define binary 

using namespace std;

const int N = 10;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    int a[N][N];

#ifdef binary
    ofstream fout("data.dat");
    if (!fout.is_open()) {
        cout << "Ошибка открытия data.dat" << endl;
        return 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int val = rand() % 101 - 50;
            fout << val << " -> ";
        }
        fout << endl;
    }
    fout.close();

    ifstream fin("data.dat");
    if (!fin.is_open()) {
        cout << "Ошибка открытия data.dat" << endl;
        return 1;
    }

    char c1, c2;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            fin >> a[i][j];
            fin >> c1;
            fin >> c2;
        }
    }
    fin.close();
#else
    ofstream fout("data.dat", ios_base::binary);
    if (!fout.is_open()) {
        cout << "Ошибка открытия data.dat" << endl;
        return 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = rand() % 101 - 50;
        }
    }
    fout.write((char*)a, sizeof(a));
    fout.close();

    ifstream fin("data.dat", ios_base::binary);
    if (!fin.is_open()) {
        cout << "Ошибка открытия data.dat" << endl;
        return 1;
    }

    fin.read((char*)a, sizeof(a));
    fin.close();
#endif

    int max_val = a[0][0];
    int max_row = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (a[i][j] > max_val) {
                max_val = a[i][j];
                max_row = i;
            }
        }
    }

    if (max_row != 0) {
        for (int j = 0; j < N; j++) {
            int t = a[0][j];
            a[0][j] = a[max_row][j];
            a[max_row][j] = t;
        }
    }

#ifdef binary
    ofstream res("result.res");
    if (!res.is_open()) {
        cout << "Ошибка открытия result.res" << endl;
        return 1;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res << a[i][j] << " ";
        }
        res << endl;
    }
    res.close();
#else
    ofstream res("result.res", ios_base::binary);
    if (!res.is_open()) {
        cout << "Ошибка открытия result.res" << endl;
        return 1;
    }
    res.write((char*)a, sizeof(a));
    res.close();
#endif

    return 0;
}

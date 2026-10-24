#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, a;

	cin >> x >> a;

	double eps = 0.0001;
	double q = 1;
	double Sum = 1;
	double n = 1;
	while (fabs(q) > eps)
	{
		q = q * x * (a - n + 1) / n;
		Sum += q;
		n++;
	}

	cout << Sum << " " << pow(1 + x, a) << endl;
}
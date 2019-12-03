#include <iomanip>
#include <iostream>
using namespace std;

int main()

{

	setlocale(LC_CTYPE, "rus");


	{cout << "\n===== Задание 11 ==========\n";
	double e, xm, ya, yb, ym, a, b, c;
	cout << "Введите a, b, e: " << (a = 5) << " " << (b = 10) << " " << (e = 1e-007) << endl;
	xm = (b - a)*(b - a)*(b - a)*(b - a) - 16 * (b - a)*(b - a)*(b - a) + 18 * (b - a)*(b - a) + 415 * (b - a) - 789;
	ya = (a)*(a)*(a)*(a)-16 * (a)*(a)*(a)+18 * (a)*(a)+415 * (a)-789;
	yb = (b)*(b)*(b)*(b)-16 * (b)*(b)*(b)+18 * (b)*(b)+415 * (b)-789;
	
	for (; b - a > e;) {
		xm = (b + a) / 2;
		ym = xm*xm*xm*xm - 16 * xm*xm*xm + 18 * xm*xm + 415 * xm - 789; cout << ym << endl;
		if (ym = 0 || ya==0||  (ya < 0 & ym>0) || (ya > 0 & ym < 0)) { b = xm; yb = (b)*(b)*(b)*(b)-16 * (b)*(b)*(b)+18 * (b)*(b)+415 * (b)-789; }
		else { a = xm; ya = xm *xm *xm *xm - 16 * xm *xm *xm + 18 * xm *xm + 415 * xm - 789; }
	}
	cout << "Корень = " << xm;
	system("pause");
	}
}
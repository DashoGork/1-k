#include <iomanip>
#include <iostream>
using namespace std;
void line1();
void line2(int, char);
int sumdig(int);
bool QE(double, double, double, double&, double&);
void fun1(double, char = '*', int = 2);
void change(int&, int&);
void change(double&, double&);
void change(char&, char&);
void timeout(int, int, double);
void timeout(int, int);
void timeout(int, double);
void task2(int, char);
void mySin(double, double);
void tas6(double, double);
void fun3(int, int&, int&);
inline int factorial(int n) {
	int result = 1;
	for (int i = 2; i <= n; i++)
		result *= i;
	return result;
}
inline char upreg(char n) {
	if (n > 159)
		n=n-32 ;
	else if (n<223 & n< 240)
		n = n - 80;
	return n;
}
void realout(float);
int main()

{

	setlocale(LC_CTYPE, "rus");


	{cout << "\n===== Задание 1 ==========\n";
	//1-ый вариант без функции
	char ch = '-'; int i;
	for (i = 0; i <= 50; i++) cout << ch;
	cout << endl;
	cout << setw(40) << "Модульное построение программ\n";
	for (i = 0; i <= 50; i++) cout << ch;
	cout << endl;
	//2-ой вариант с функцией без параметров
	line1();
	cout << setw(40) << "Модульное построение программ\n";
	line1();
	//3 - тий вариант с функцией с параметрами
	int n = 40, l = 29;
	line2(n, '=');
	cout << setw(n / 2 + l / 2) << "Модульное построение программ\n";
	line2(n, '-'); }


	{cout << "\n===== Задание 3 ==========\n";
	const int nb = 32;
	int n, B[nb] = { 592038, 3544358,0 };
	int i = 0;
	while (1) {
		cout << "n = " << (n = B[i++]) << endl;
		if (!n) { cout << "завершение вычислений\n"; break; }
		cout << "сумма цифр = " << sumdig(n) << endl;
	}
	}


	{cout << "\n===== Задание 5 ==========\n";
	double a1, b1, c1, root1, root2;
	cout << "Коффициенты: " << (a1 = 2.7) << (b1 = 15.2) << (c1 = 6.5) << "2.7 15.2 6.5" << endl;//<< (a1 = 5.3) << (b1 = 8.1) << (c1 = 17) << "5.3 8.1 17"<<endl;
	if (QE(a1, b1, c1, root1, root2))
		cout << "Корни: " << fixed << setprecision(7) << root1 << ", " << root2 << endl;
	else cout << "У уравнения нет вещественных корней"; }
	

	{ cout << "\n=== Задание 8 ========\n"<< endl;
	cout.flags(0);
	fun1(2.5, '-', 11);
	fun1(2.5, '-');
	fun1(2.5);
	//fun1(); //ошибка!
	//fun1(3.85, , 33); //ошибка!
	fun1(3.85, '*', 33);
	}

	{ cout<< "\n=== Задание 11 ========\n"<< endl;
	int i1, i2;
	cout.flags(0);
	cout<< "Целые числа: ";
	//cin >> i1>> i2 >> endl;
	cout <<(i1 = 11) << " " <<(i2 = 22) << endl;
	change(i1, i2);
	cout << "Результат перестановки: " << i1 << " " << i2 << endl;
	double f1, f2;
	cout << "Вещественные числа: "<<(f1 = 3.4)<< " " <<(f2 = 5.6) << endl;
	change(f1, f2);
	cout << "Результат перестановки: " << f1 << " " << f2 << endl;
	char c1, c2;
	cout << "Символы: " << (c1 = 'a') << " " << (c2 = 'b') << endl;
	change(c1, c2);
	cout << "Результат перестановки: " << c1 << " " << c2 << endl;
	}

	{ cout << "\n=== Задание 13 ========\n" << endl;
	int h, m;
	double s;
	cout.flags(0);
	cout << "Начальные данные: ";
	//cin >> h >> m >> s >> endl;
	cout << (h = 14) << " " << (m = 7) << " " << (s = 9.45) << endl;
	cout << endl;
	cout << "Формат 1: ";
	timeout(h, m, s);
	cout << "Формат 2: ";
	timeout(h, m);
	cout << "Формат 3: ";
	timeout(m, s);
	}

	{ cout << "\n=== Задание 15 =================\n" << endl;
	int n = 8, m = 3;
	cout.flags(0);
	cout << "Количество сочетаний " << m << " из " << n << " равно " << factorial(n) / factorial(m) / factorial(n - m) << endl;
	}

	{ cout << "\n=== Задание 2 ================\n" << endl;
	task2(5, '*');
	task2(10, '#');
	}
	
	{ cout << "\n=== Задание 4 =================\n" << endl;
	mySin(3.2, 1e-007);
	}
	
	{ cout << "\n=== Задание 6 ================\n" << endl;
	double a, b;
	cout << "Начальные данные: " << (a = 5) << " " << (b = 12) << endl;
	//cout << "Начальные данные: " << a = 3.57 << " " << b = 8.43 << endl;
	cout << "Средние значения: "; tas6(a, b); cout << endl;
	}
	
	{ cout << "\n=== Задание 16 =================\n" << endl;
	char s[] = "Void-функции не имеют ВЫХОДНОГО параметра";
	cout << "Начальный текст: " << endl << s << endl;
	int n;
	n = strlen(s);
	for (int i = 0; i <= n; i++) {
		s[i]=upreg(s[i]);
	}
	cout << "Измененный текст: " << endl;  cout << s << endl;
	}
	system("pause");
}
void line1() {
	char ch = '-'; int i;
	for (i = 0; i <= 50; i++) cout << ch;
	cout << endl;
}
void line2(int len, char c) {
	for (int i = 0; i < len; i++) cout << c;
	cout << endl;
}
int sumdig(int n) {
	int sum = 0;
	while (n > 0) { sum += n % 10; n /= 10; }
	return sum;
}
bool QE(double a, double b, double c, double& x1, double& x2) {
	bool out = false; double d = b * b - 4 * a * c;
	if (d >= 0) {
		d = sqrt(d); x1 = (-b + d) / 2 / a; x2 = (-b - d) / 2 / a; out = true;
	}
	return out;
}
void fun1(double f, char ch, int i) {
	cout << setw(6) << f << setw(6) << ch << setw(6) << i << endl;
}

void change(int& n1, int& n2) {
	int t = n1;
	n1 = n2;
	n2 = t;
}

void change(double& n1, double& n2) {
	double t = n1;
	n1 = n2;
	n2 = t;
}

void change(char& n1, char& n2) {
	char t = n1;
	n1 = n2;
	n2 = t;
}

void timeout(int hr, int mn, double sc) {
	cout << hr << ':' << setw(2) << setfill('0') << mn << ':' << setw(5) << fixed << setprecision(2) << setfill('0') << sc << endl;
	cout << setfill(' ');
}

void timeout(int hr, int mn) {
	cout << hr << ':' << setw(2) << setfill('0') << mn << endl;
	cout << setfill(' ');
}

void timeout(int mn, double sc) {
	cout << setw(2) << setfill('0') << mn << ':'<< setw(5) << fixed << setprecision(2) << setfill('0') << sc << endl;
	cout << setfill(' ');
}
void task2(int n, char ch) {
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
		{
			if (j <= i)
			{
				cout << ch;
			}
			else
			{
				cout << ' ';
			}
		}
		cout << "\n";
	}
	cout << "\n";
	
}
void mySin(double x, double e) {
	cout << "-----------------------" << endl;
	cout << fixed << right << setw(4) << "x" << fixed << right << setw(8) << "y" << endl;
	cout << "-----------------------" << endl;
	float sum, add, k, m1, m2;
	k = 0; m1 = 1;
		sum = 0;
		add = 1;
	for (double a = 0; a <= x; a += 0.1) {
		while (abs(add) > e){
			
			cout << fixed << right << setw(5) << setprecision(1) << a << "	";
			cout << fixed << right << setw(8) << setprecision(5) << sum << endl; 
				sum += add;
				m1 = m1 * (-1) * a * a / (k + 1) / (k + 2);
				add = m1;
				k+=2;
		
		}
	}
}
void tas6(double a, double b){
	
	cout << fixed << right << setw(5) << setprecision(4) << (a+b)/2 <<" " << fixed << right << setw(5) << setprecision(4) << sqrt(a * b)<< " " << fixed << right << setw(5) << setprecision(4) << 2/(1/a + 1/b)<<endl;
}

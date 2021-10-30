#include <iostream>
#include <clocale>
using namespace std;
int num, x, y, z;
bool c(true);
int main()
{
	setlocale(LC_ALL, "Ru");
	cout << "Введите трехзначное число:\n";
	cin >> num;
	while ((num < 100) or (num > 999))
	{
		cout << "Введено не трехзначное число:\n";
		cin >> num;
	}
	x = num / 100;
	y = (num % 100) / 10;
	z = num % 10;
	while (c == true)
	{
		if ((x == y) or (y == z) or (z == x))
		{
			cout << "Есть повторяющиеся цифры:\n";
			cin >> num;
			x = num / 100;
			y = (num % 100) / 10;
			z = num % 10;
			while ((num < 100) or (num > 999))
			{
				cout << "Введено не трехзначное число:\n";
				cin >> num;
			}
		}
		else
		{
			c = false;
		}
	}
	cout << "Все комбинации: " << x << y << z << endl;
	cout << x << z << y << endl;
	cout << y << x << z << endl;
	cout << y << z << x << endl;
	cout << z << x << y << endl;
	cout << z << y << x << endl;

	if ((x > y) & (x > z) & (y > z))
		cout << "Максимальное значение:\n" << x << y << z << endl;
	if ((x > y) & (x > z) & (z > y))
		cout << "Максимальное значение:\n" << x << z << y << endl;
	if ((y > x) & (y > z) & (x > z))
		cout << "Максимальное значение:\n" << y << x << z << endl;
	if ((y > x) & (y > z) & (z > x))
		cout << "Максимальное значение:\n" << y << z << x << endl;
	if ((z > x) & (z > y) & (x > y))
		cout << "Максимальное значение:\n" << z << x << y << endl;
	if ((z > x) & (z > y) & (y > x))
		cout << "Максимальное значение:\n" << z << y << x << endl;
}
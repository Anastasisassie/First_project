#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите трехзначное число : ";
	cin >> n;
	if (n % 2 == 0)
		cout << n << " четное число " << endl;
	else
		cout << n << " нечетное число " << endl;
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ����������� ����� : ";
	cin >> n;
	if (n % 2 == 0)
		cout << n << " ������ ����� " << endl;
	else
		cout << n << " �������� ����� " << endl;
	system("pause");
	return 0;
}
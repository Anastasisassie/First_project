#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int i, j , n, m, Sum, Mid;
    cout << "������� ����� �����: "; cin >> n;
    cout << "������� ����� ��������: "; cin >> m;
    srand(time(0));

    int** mass = new int* [n];
    for ( i = 0; i < n; i++)
    {
        mass[i] = new int[m];
    }
    for ( i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            mass[i][j] = rand() % 10;
            cout << mass[i][j] << ' ';
        }
        cout << '\n';
    }
    for (Sum = i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            Sum += mass[i][j];
    for (Mid = i = 0; i < n; i++)
        for (j = 0; j < m; j++)
             Mid = Sum/(n*m);

    cout << "\n����� ��������� ������� �����: " << Sum << endl;
    cout << "������� �������� ��������� �������: " << Mid << endl;

    for ( i = 0; i < n; i++)
    {
        delete[] mass[i];
    }
    delete[] mass;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j, n, m, Sum, Mid;
    int A = -9;
    int B = 9;
    cout << "Enter the number of lines: "; cin >> n;
    cout << "Enter the number of columns: "; cin >> m;
    srand(time(0));

    int** mass = new int* [n];
    for (i = 0; i < n; i++)
    {
        mass[i] = new int[m];
    }
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            mass[i][j] = A + rand() % ((B + 1) - A);
            cout << setw(3) << mass[i][j] << ' ';
        }
        cout << '\n';
    }
    for (Sum = i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            Sum += mass[i][j];
    for (Mid = i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            Mid = Sum / (n * m);

    cout << "\nSum of array elements: " << Sum << endl;
    cout << "Average value of array elements: " << Mid << endl;

    for (i = 0; i < n; i++)
    {
        delete[] mass[i];
    }
    delete[] mass;
}
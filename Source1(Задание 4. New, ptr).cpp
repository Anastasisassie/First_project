#include <iostream>
using namespace std;
int main()
{
  
    setlocale(LC_ALL, "Rus");
    int i, j, n, k;
    cout << "¬ведите n: "; cin >> n;
    cout << "¬ведите k: "; cin >> k;
    srand(time(0));

    int** mass = new int* [n];
    for (i = 0; i < n; i++) 
    {
        mass[i] = new int[k];
    }
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < k; ++j)
        {
            mass[i][j] = rand() % 10;
            cout << mass[i][j] << ' ';
        }
        cout << '\n';
    }

    for (i = 0; i < n; i++)
    {
        delete[] mass[i];
    }
    delete[] mass;
}
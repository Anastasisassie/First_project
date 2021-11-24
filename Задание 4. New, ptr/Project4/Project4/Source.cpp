#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j, n, k;
    int A = -9;
    int B = 9;
    cout << "Enter n: "; cin >> n;
    cout << "Enter k: "; cin >> k;
    srand(time(0));

    int** arr = new int* [n];
    for (i = 0; i < n; i++)
    {
        arr[i] = new int[k];
    }
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < k; ++j)
        {
            arr[i][j] = A + rand() % ((B + 1) - A);
            cout << setw(3) << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n / 2; j++)
        {
            if (arr[i][j] > arr[i][n - j - 1])
            {
                if (min > arr[i][n - j - 1])
                    min = arr[i][n - j - 1];
                if (max < arr[i][j])
                    max = arr[i][j];
            }
            else
            {
                if (min > arr[i][j])
                    min = arr[i][j];
                if (max < arr[i][n - j - 1])
                    max = arr[i][n - j - 1];
            }
        }
    }
    cout << "Maximum = " << max;
    cout << "\nMinimum = " << min;

    for (i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}
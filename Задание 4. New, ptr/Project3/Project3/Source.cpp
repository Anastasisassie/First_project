#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int** matrixmultiplication(int n, int m, int** a, int z, int w, int** b)
{
    if (m == z)
    {
        int** result = new int* [n];
        for (int i = 0; i < n; i++)
        {
            result[i] = new int[z];
        }

        for (int i = 0; i < n; i++)
            for (int j = 0; j < w; j++)
            {
                int c = 0;
                for (int k = 0; k < z; k++)
                {
                    c += a[i][k] * b[k][j];
                }
                result[i][j] = c;

            }
        return result;
    }
    return NULL;
}
int main()
{
    int n;
    int m;
    int A = -9;
    int B = 9;
    cout << "Enter the number of rows of the matrix A: "; cin >> n;
    cout << "Enter the number of columns of matrix A: "; cin >> m;
    srand(time(NULL));
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
    }
    cout << endl;
    cout << "MATRIX A:" << endl;
    cout << "___________________________________" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = A + rand() % ((B + 1) - A);
            cout << setw(3) << a[i][j] << ' ';
        }

        cout << endl;
    }
    cout << "___________________________________" << endl << endl;

    int z;
    int w;
    cout << "Enter the number of rows of the matrix B: "; cin >> z;
    cout << "Enter the number of columns of matrix B: "; cin >> w;
    srand(time(NULL));
    int** b = new int* [z];
    for (int i = 0; i < z; i++)
    {
        b[i] = new int[w];
    }
    cout << endl;
    cout << "MATRIX B:" << endl;
    cout << "___________________________________" << endl;
    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j < w; j++)
        {
            b[i][j] = A + rand() % ((B + 1) - A);
            cout << setw(3) << b[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "___________________________________" << endl << endl;

    int** result = matrixmultiplication(n, m, a, z, w, b);
    if (result)
    {
        cout << "matrix multiplication A*B:" << endl;
        cout << "___________________________________" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cout << setw(5) << result[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < n; i++)
        {
            delete[] result[i];
        }
        delete[] result;
    }
    else
    {
        cout << "Multiplication of such matrices is impossible!" << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}
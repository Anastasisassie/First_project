#include <iostream>
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
    setlocale(LC_ALL, "RUS");

    int n;
    int m;
    cout << "¬ведите кол-во строчек матрицы A" << endl;
    cin >> n;
    cout << "¬ведите кол-во столбцов матрицы A" << endl;
    cin >> m;
    srand(time(NULL));
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
    }
    cout << endl;
    cout << "ћј“–»÷ј A:" << endl;
    cout << "___________________________________" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << ' ';
        }

        cout << endl;
    }
    cout << "___________________________________" << endl << endl;


    int z;
    int w;
    cout << "¬ведите кол-во строчек матрицы B" << endl;
    cin >> z;
    cout << "¬ведите кол-во столбцоов матрицы B" << endl;
    cin >> w;
    srand(time(NULL));
    int** b = new int* [z];
    for (int i = 0; i < z; i++)
    {
        b[i] = new int[w];
    }
    cout << endl;
    cout << "ћј“–»÷ј B:" << endl;
    cout << "___________________________________" << endl;
    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j < w; j++)
        {
            b[i][j] = rand() % 10;
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "___________________________________" << endl << endl;

    int** result = matrixmultiplication(n, m, a, z, w, b);
    if (result)
    {
        cout << "–езультат умножени€ матрицы A на матрицу B:" << endl;
        cout << "___________________________________" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cout << result[i][j] << " ";
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
        cout << "”множение таких матриц невозможно!" << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}
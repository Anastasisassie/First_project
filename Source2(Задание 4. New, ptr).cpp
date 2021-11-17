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
    cout << "������� ���-�� ������� ������� A" << endl;
    cin >> n;
    cout << "������� ���-�� �������� ������� A" << endl;
    cin >> m;
    srand(time(NULL));
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
    }
    cout << endl;
    cout << "������� A:" << endl;
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
    cout << "������� ���-�� ������� ������� B" << endl;
    cin >> z;
    cout << "������� ���-�� ��������� ������� B" << endl;
    cin >> w;
    srand(time(NULL));
    int** b = new int* [z];
    for (int i = 0; i < z; i++)
    {
        b[i] = new int[w];
    }
    cout << endl;
    cout << "������� B:" << endl;
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
        cout << "��������� ��������� ������� A �� ������� B:" << endl;
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
        cout << "��������� ����� ������ ����������!" << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}
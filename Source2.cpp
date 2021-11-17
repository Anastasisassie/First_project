#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 0, k;
    int n;

    cout << "n="; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        k = a + b;
        a = b;
        b = k;
        cout << k << "\n";
    }

    system("pause");
    return 0;
}
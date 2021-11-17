#include<iostream>
using namespace std;
int main()
{
    int num = 0, t = 0, d = 1;
    cout << "Enter count :" << endl;
    cin >> num;
    while (num)
    {
        t += (num % 2) * d;
        num = num / 2;
        d = d * 10; 
    }
    cout << t;
    cout << endl;
    system("pause");
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int length, width, area, P;
    cout << "length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    area = length * width;
    P = (length + width) * 2;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << P << endl;
    for (int i = 0; i < width; i++)
        cout << '*';
    cout << endl;

    for (int i = 0; i < length - 2; i++)
    {
        cout << '*';
        for (int j = 0; j < width - 2; j++)
            cout << ' ';
        cout << '*' << endl;
    }

    if (length > 1)
        for (int i = 0; i < width; i++)
            cout << '*';
    cout << endl;
    system("pause");
    return 0;
}
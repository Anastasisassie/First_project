#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите номер месяца: ";
    int a;
    cin >> a;
    switch (a) {
    case 1: {
        cout << "Зима." << endl;
        break;
    }
    case 2: {
        cout << "Зима." << endl;
        break;
    }
    case 3: {
        cout << "Весна." << endl;
        break;
    }
    case 4: {
        cout << "Весна." << endl;
        break;
    }
    case 5: {
        cout << "Весна." << endl;
        break;
    }
    case 6: {
        cout << "Лето." << endl;
        break;
    }
    case 7: {
        cout << "Лето." << endl;
        break;
    }
    case 8: {
        cout << "Лето." << endl;
        break;
    }
    case 9: {
        cout << "Осень." << endl;
        break;
    }
    case 10: {
        cout << "Осень." << endl;
        break;
    }
    case 11: {
        cout << "Осень." << endl;
        break;
    }
    case 12: {
        cout << "Зима." << endl;
        break;
    }
    default: cout << "Введите правильный номер месяца!" << endl;
    }
}
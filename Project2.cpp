#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "¬ведите номер мес€ца: ";
    int a;
    cin >> a;
    switch (a) {
    case 1: {
        cout << "январь." << endl;
        break;
    }
    case 2: {
        cout << "‘евраль." << endl;
        break;
    }
    case 3: {
        cout << "ћарт." << endl;
        break;
    }
    case 4: {
        cout << "јпрель." << endl;
        break;
    }
    case 5: {
        cout << "ћай." << endl;
        break;
    }
    case 6: {
        cout << "»юнь." << endl;
        break;
    }
    case 7: {
        cout << "»юль." << endl;
        break;
    }
    case 8: {
        cout << "јвгуст." << endl;
        break;
    }
    case 9: {
        cout << "—ент€брь." << endl;
        break;
    }
    case 10: {
        cout << "ќкт€брь." << endl;
        break;
    }
    case 11: {
        cout << "Ќо€брь." << endl;
        break;
    }
    case 12: {
        cout << "ƒекабрь." << endl;
        break;
    }
    default: cout << "¬ведите правильный номер мес€ца!" << endl;
    }
}

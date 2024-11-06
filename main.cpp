#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char oper;

    cout << "1 chislo vvedit: ";
    cin >> num1;
    cout << "vvedit diu (+, -, *, /): ";
    cin >> oper;
    cout << "2 chislo vvedit: ";
    cin >> num2;

    switch (oper) {
    case '+':
        cout << "rezultat: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "rezultat: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "rezultat: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "rezultat: " << num1 / num2 << endl;
        }
        else {
            cout << "Errorrr: //0!" << endl;
        }
        break;
    default:
        cout << "Error dia!" << endl;
        break;
    }

    return 0;
}

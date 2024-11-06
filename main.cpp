#include <iostream>
#include <windows.h> // Для зміни кольору консолі в Windows

using namespace std;

// Функція для зміни кольору фону
void setColor(int backgroundColor) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backgroundColor);
}

int main() {
    // Виведення повідомлень з різними кольорами фону
    setColor(BACKGROUND_RED);
    cout << "Hello, World!" << endl;

    setColor(BACKGROUND_GREEN);
    cout << "Hello, World!" << endl;

    setColor(BACKGROUND_BLUE);
    cout << "Hello, World!" << endl;

    setColor(BACKGROUND_INTENSITY | BACKGROUND_RED);
    cout << "Hello, World!" << endl;

    setColor(BACKGROUND_INTENSITY | BACKGROUND_GREEN);
    cout << "Hello, World!" << endl;

    // Повертаємо колір консолі в стандартний
    setColor(0);

    return 0;
}

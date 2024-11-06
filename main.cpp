#include <iostream>
#include <windows.h>  // Для работы с консольными цветами

using namespace std;

void setConsoleColor(int bgColor, int fgColor) {
    // Устанавливаем цвет фона и переднего плана консоли
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgColor << 4) | fgColor);
}

int main() {
    int choice;

    // Выводим несколько строк "Hello, World!"
    cout << "1. Hello, World!" << endl;
    cout << "2. Hello, World!" << endl;
    cout << "3. Hello, World!" << endl;
    cout << "4. Hello, World!" << endl;

    // Запрашиваем у пользователя выбор
    cout << "Enter a number (1-4) to change the background color: ";
    cin >> choice;

    // Определяем цвет фона и текста в зависимости от выбора
    switch (choice) {
    case 1:
        setConsoleColor(0, 15);  // Черный фон, белый текст
        break;
    case 2:
        setConsoleColor(1, 15);  // Синий фон, белый текст
        break;
    case 3:
        setConsoleColor(2, 15);  // Зеленый фон, белый текст
        break;
    case 4:
        setConsoleColor(3, 15);  // Голубой фон, белый текст
        break;
    default:
        cout << "Invalid choice!" << endl;
        return 1;
    }

    // После выбора цвет изменен, выводим Hello World!
    system("cls");  // Очистить экран
    cout << "Hello, World!" << endl;

    return 0;
}

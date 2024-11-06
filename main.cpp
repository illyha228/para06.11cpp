#include <iostream>
#include <windows.h> 

using namespace std;

void setColor(int backgroundColor) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backgroundColor);
}

int main() {
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

    setColor(0);

    return 0;
}

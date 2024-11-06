#include <iostream>
#include <Windows.h>

using std::cout;
using std::endl;


int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("chcp 1251");
	cout << "Привіт Гудзиик" << endl;
	system("pause");
	return 0;
}
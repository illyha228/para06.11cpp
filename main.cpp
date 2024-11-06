#include <iostream>
#include <Windows.h>

using std::cout;
using std::endl;


int main() 
{
	GetConsoleCP(1251);
	system("chcp 1231");
	cout << "Привіт Гудзиик" << endl;
	system("pause");
	return 0;
}
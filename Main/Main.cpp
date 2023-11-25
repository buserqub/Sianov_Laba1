#include <iostream>
#include "gears.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	gears gears1((char*)"Деталь1", (char*)"Шифр1", 10);

	cout << gears1.getName() << endl;
	cout << gears1.getCode() << endl;
	cout << gears1.getCount() << endl;

	gears gears2;
	gears2.setName((char*)"Деталь2");
	gears2.setCode((char*)"Шифр2");
	gears2.setCount(20);

	gears2.show();

	gears gears3;
	gears3.set((char*)"Деталь3", (char*)"Шифр3", 30);
	gears3.show();

	gears gears4(gears1);
	gears4.show();

	gears1.setCode((char*)"Шифр2");
	gears1.setCount(20);

	gears1.show();
	gears4.show();
}

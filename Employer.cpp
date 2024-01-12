#include <iostream>
#include <stdlib.h>
#include "Employ.h"
int main()
{
	system("chcp 1251");
	system("cls");
	Employee* a[3];
	cout << "Введите обязанности President: ";
	string prez, manj, work;
	cin >> prez;
	a[0] = new President(prez);
	cout << "Введите обязанности Manager: ";
	cin >> manj;
	a[1] = new Manager(manj);
	cout << "Введите обязанности Worker: ";
	cin >> work;
	a[2] = new Worker(work);
	a[0]->print();
	a[1]->print();
	a[2]->print();



}


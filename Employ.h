#pragma once
#include <stdlib.h>
#include <iostream>
using namespace std;
class Employee {
public:
	virtual void print() = 0;
};
class President : public Employee {
public:
	string profession;
	virtual void print() {
		cout << "����������� President: " << profession << endl;
	}
	President(string profession) {
		President::profession = profession;
	}
};
class Manager : public Employee {
public:
	string profession;
	virtual void print() {
		cout << "����������� Manager: " << profession << endl;
	}
	Manager(string profession) {
		Manager::profession = profession;
	}
};
class Worker : public Employee {
public:
	string profession;
	virtual void print() {
		cout <<"����������� Worker: " << profession << endl;
	}
	Worker(string profession) {
		Worker::profession = profession;
	}
};
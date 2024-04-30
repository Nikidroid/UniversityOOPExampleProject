#pragma once
#include <iostream>
#include "Human.h"

using namespace std;

class Worker : public Human {
private:
	double salary;
public:
	Worker() {
		cout << "Default constructor of worker" << endl;
	}
	//Worker(string name, int age, double salary) :
	//	name(name), age(age), salary(salary) {}
	~Worker() {
		cout << "Destructor of worker" << endl;
	}

	int getSalary();
	void setSalary(double salary);

	string getInfo();
};


#pragma once
#include "Human.h"

using namespace std;

class Student : public Human {
private:
	string name;
	int age;
	double mark;

public:
	Student() {} /*: Student("no name", 5, 4) {}

	Student(string name, int age, double mark)
		: name(name), age(age), mark(mark) {}

	Student(string name) : Student(name, 0, 0) {}
	Student(double mark) : Student("no name", 0, mark) {}*/

	~Student() {}

	double getMark();
	void setMark(double m);

	string getInfo();

};
#include "Student.h"

// Default constructor
Student::Student() {
	//cout << "Default constructor is called" << endl;
	name = "No name";
	age = 5;
	mark = 4;
}

// Canonical constructor with parameters (arguments)
Student::Student(string nm, int a, double m) {
	//cout << "Canonical constructor is called" << endl;
	name = nm;
	age = a;
	mark = m;
}

// Constructor with parameters (arguments)
Student::Student(string nm) {
	//cout << "Constructor with parameters is called" << endl;
	name = nm;
	age = 0;
	mark = 0;
}

Student::Student(double m) {
	cout << "calling constructor with parameters 2" << endl;
	name = "no name";
	age = 0;
	mark = m;
}

// Destructor
Student::~Student() {
}

string Student::getName() {
	return name;
}

void Student::setName(string nm) {
	name = nm;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int a) {
	if (a > 0 && a < 90) {
		age = a;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(double m) {
	if (m > 0 && m <= 10) {
		mark = m;
	}
}
string Student::convert() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", mark = " + to_string(mark);
	return s;
}
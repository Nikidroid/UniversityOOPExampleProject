#include "Student.h"

// Default constructor
Student::Student() {
	//cout << "Default constructor is called" << endl;
	name = "No name";
	age = 5;
	mark = 4;
}

// Canonical constructor with parameters (arguments)
Student::Student(string name, int age, double mark) {
	//cout << "Canonical constructor is called" << endl;
	this->name = name;
	this->age = age;
	this->mark = mark;
}

// Constructor with parameters (arguments)
Student::Student(string name) {
	//cout << "Constructor with parameters is called" << endl;
	this->name = name;
	age = 0;
	mark = 0;
}

Student::Student(double mark) {
	cout << "calling constructor with parameters 2" << endl;
	name = "no name";
	age = 0;
	this->mark = mark;
}

// Destructor
Student::~Student() {
}

string Student::getName() {
	return name;
}

void Student::setName(string name) {
	this->name = name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age > 0 && age < 90) {
		this->age = age;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(double mark) {
	if (mark > 0 && mark <= 10) {
		this->mark = mark;
	}
}
string Student::convert() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", mark = " + to_string(mark);
	return s;
}
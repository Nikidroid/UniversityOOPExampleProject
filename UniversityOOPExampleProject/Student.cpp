#include "Student.h"

//// copy-constructor
//Student(const Student& student) {

//}

double Student::getMark() {
	return mark;
}

void Student::setMark(double mark) {
	if (mark > 0 && mark <= 10) {
		this->mark = mark;
	}
}

string Student::getInfo() {
	string s = "";
	s += name;
	s += ": age = " + to_string(getAge());
	s += ", mark = " + to_string(mark);
	return s;
}
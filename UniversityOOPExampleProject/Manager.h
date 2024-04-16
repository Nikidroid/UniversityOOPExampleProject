#pragma once
#include "Student.h"

class Manager {
public:
	double getMaxMark(Student* students, int length);

	double getMinMark(Student* students, int length);

	double calcAvgMark(Student* students, int length);

	Student getBestStudent(Student* students, int length);
};
#pragma once
#include "Student.h"

class Group {
private:
	Student* list;
	int size = 0;

public:
	int getSize();
	void add(Student student);
	// bool remove(Student student);
	Student get(int index);
	string getInfo();

};


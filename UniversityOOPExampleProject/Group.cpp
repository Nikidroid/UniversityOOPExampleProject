#include "Group.h"


int Group::getSize() {
	return size;
}

void Group::add(Student student) {
	if (size == 0) {
		list = new Student[1];
		list[0] = student;
	}
	else {
		Student* temp = new Student[size + 1];

		for (int i = 0; i < size; i++) {
			temp[i] = list[i];
		}

		temp[size] = student;
		delete[] list;
		list = temp;
	}

	size++;
}

// bool Group::remove(Student student){
// 
// }

Student Group::get(int index) {
	if (index >= 0 && index < size) {
		return list[index];
	}

	return NULL;
}

string Group::getInfo() {
	string s = "List of students: ";

	for (int i = 0; i < size; i++) {
		s += "\n" + to_string(i + 1) + ") ";
		s += list[i].convert();
 	}

	return s;
}

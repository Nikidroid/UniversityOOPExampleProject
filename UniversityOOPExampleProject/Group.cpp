#include "Group.h"


int Group::getSize() {
	return size;
}

bool Group::add(Student student) {
	if (size < 30) {
		list[size] = student;
		size++;
		return true;
	}
	
	return false;
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

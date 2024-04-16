#include "Student.h"
#include "Manager.h"
#include <iostream>

using namespace std;

int main() {
	Student st1("Alex", 14, 9);
	cout << st1.convert() << endl;

	Student* st2 = new Student("Peter", 16, 10);

	cout << st2->convert() << endl;

	delete st2;

	return 0;
}
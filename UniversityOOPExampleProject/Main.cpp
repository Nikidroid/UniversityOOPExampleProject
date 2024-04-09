#include "Student.h"
#include "Manager.h"
#include <iostream>

using namespace std;

int main() {
	Student st("Alex", 14, 9);

	cout << "Before: " << st.convert() << endl;
	st.setAge(-20);
	cout << "After: " << st.convert() << endl;

	return 0;
}
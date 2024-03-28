#include "Student.h"
#include <iostream>

using namespace std;

int main() {
	Student st1("Alex", 14, 9);
	Student st2("Alice", 13, 7);
	Student st3("Potter", 15, 10);
	Student st4;
	Student st5{};
	Student st6{"Peter"};
	
	cout << st1.convert() << endl;
	cout << st2.convert() << endl;
	cout << st3.convert() << endl;
	cout << st4.convert() << endl;
	cout << st5.convert() << endl;
	cout << st6.convert() << endl;
	return 0;
}
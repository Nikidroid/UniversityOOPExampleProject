#include "Manager.h"
#include "Group.h"
#include <iostream>

int main() {
	Group groupA;
	Group groupB;
	
	Student st1{ "Alex", 16, 8 };
	Student st2{ "Tolya", 15, 7 };
	Student st3{ "Vanya", 14, 10 };
	Student st4{ "Sergey", 16, 8 };
	Student st5{ "Kirill", 15, 9 };
	Student st6{ "Vlad", 15, 9 };
	Student st7{ "Misha", 14, 6 };

	groupA.add(st1);
	groupA.add(st2);
	groupA.add(st3);
	groupA.add(st4);
	groupA.add(st5);
	groupA.add(st6);
	groupA.add(st7);

	cout << "Before removing: " << endl;
	cout << groupA.getInfo() << endl;
	cout << groupA.getSize() << endl;


	groupA.remove(0);
	//groupA.remove(st6);
	cout << groupA.getSize() << endl;

	cout << "After removing: " << endl;
	cout << groupA.getInfo() << endl;

	return 0;
}
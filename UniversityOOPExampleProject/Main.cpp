#include "Manager.h"
#include "Group.h"
#include <iostream>

int main() {
	Group groupA;
	Group groupB;
	
	Student st1{ "Alex", 16, 8 };
	Student st2{ "Tolya", 15, 7 };
	Student st3{ "Vanya", 14, 10 };

	groupA.add(st1);
	groupA.add(st2);
	groupA.add(st3);

	Student st4{ "Sergey", 16, 8 };
	Student st5{ "Kirill", 15, 9 };
	Student st6{ "Vlad", 15, 9 };
	Student st7{ "Misha", 14, 6 };

	groupB.add(st4);
	groupB.add(st5);
	groupB.add(st6);
	groupB.add(st7);



	cout << groupA.getInfo() << endl;
	cout << groupB.getInfo() << endl;

	Manager manager;

	cout << manager.calcAvgMark(groupA) << endl;
	cout << manager.calcAvgMark(groupB) << endl;


	return 0;
}
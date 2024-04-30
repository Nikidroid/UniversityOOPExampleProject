#pragma once
class Human {
#pragma once
#include <iostream>
#include <string>

	using namespace std;

	class Human {
	private:
		string name;
		int age;
	public:
		Human() {}
		Human(string name, int age, double salary) :
			name(name), age(age) {}
		~Human() {}

		string getName();
		void setName(string name);

		int getAge();
		void setAge(int age);

		string getInfo();
};


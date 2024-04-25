#pragma once
#include <string>

using namespace std;

class Stack {
private:
	int* stack;
	int size{ 0 };
public:
	void push(int element);
	int pop();
	int peak();
	int getSize();
	bool isEmpty();
	string getInfo();
};


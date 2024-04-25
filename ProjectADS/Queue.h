#pragma once
#include <string>

using namespace std;

class Queue{
private:
	int* queue;
	int size{ 0 };
public:
	void enqueue(int element);
	int dequeue();
	int peak();
	int getSize();
	bool isEmpty();
	string getInfo();
};


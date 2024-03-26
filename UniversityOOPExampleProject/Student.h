#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	double mark;
	
	// Default constructor
	Student() {
		//cout << "Default constructor is called" << endl;
		name = "No name";
		age = 5;
		mark = 4;
	}

	// Canonical constructor with parameters (arguments)
	Student(string nm, int a, double m) {
		//cout << "Canonical constructor is called" << endl;
		name = nm;
		age = a;
		mark = m;
	}

	// Constructor with parameters (arguments)
	Student(string nm) {
		//cout << "Constructor with parameters is called" << endl;
		name = nm;
		age = 0;
		mark = 0;
	}
	
	string convert() {
		string s = "";
		s += name;
		s += ": age = " + to_string(age);
		s += ", mark = " + to_string(mark);
		return s;
	}
};
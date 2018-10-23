// Matthew Sundberg
// COSC 2030-01
// 10-22-2018

#ifndef LAB_7_MY_STACK
#define LAB_7_MY_STACK

#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class MyStack
{
public:

	bool isEmpty();

	void push(char& c);

	char pull();

	vector<char> stringVector;
};

#endif
// Matthew Sundberg
// COSC 2030-01
// 10-22-2018

#include <iostream>
#include <vector>
#include <string>

#include "Lab7MyStack.h"

bool MyStack::isEmpty()
{
	return stringVector.empty();
}

void MyStack::push(char& c)
{
	stringVector.push_back(c);
}

char MyStack::pull()
{
	char tempChar;
	tempChar = stringVector.back();
	stringVector.pop_back();
	return tempChar;
}
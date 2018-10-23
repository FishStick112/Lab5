// Matthew Sundberg
// COSC 2030-01
// 10-22-2018

#include <iostream>
#include <string>
#include <stack>
#include <list>
#include <vector>

#include "Lab7MyStack.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stack;
using std::vector;
using std::list;

string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);

int main()
{
	string testString = "This is a test string.";

	cout << "Testing function 1 (stack): ";
	cout << stringReversal1(testString);
	cout << endl << endl << "Testing function 2 (vector): ";
	cout << stringReversal2(testString);
	cout << endl << endl << "Testing function 3 (list): ";
	cout << stringReversal3(testString);
	cout << endl << endl << "Testing function 4 (class): ";
	cout << stringReversal4(testString);
	cout << endl << endl;

	system("pause");
	return 0;
}

string stringReversal1(string input)
{
	stack<char> stringStack;
	string tempString;

	for (int i = 0; i < input.size(); i++)
	{
		stringStack.push(input[i]);
	}

	if (stringStack.empty())
	{
		cout << "The string is empty." << endl;
		exit;
	}

	for (int i = 0; i < input.size(); i++)
	{
		tempString.push_back(stringStack.top());
		stringStack.pop();
	}

	return tempString;
}

string stringReversal2(string input)
{
	vector<char> stringVector;
	string tempString;

	for (int i = 0; i < input.size(); i++)
	{
		stringVector.push_back(input[i]);
	}

	if (stringVector.empty())
	{
		cout << "The string is empty." << endl;
		exit;
	}

	for (int i = 0; i < input.size(); i++)
	{
		tempString.push_back(stringVector.back());
		stringVector.pop_back();
	}

	return tempString;
}

string stringReversal3(string input)
{
	list<char> stringList;
	string tempString;

	for (int i = 0; i < input.size(); i++)
	{
		stringList.push_back(input[i]);
	}

	if (stringList.empty())
	{
		cout << "The string is empty." << endl;
		exit;
	}

	for (int i = 0; i < input.size(); i++)
	{
		tempString.push_back(stringList.back());
		stringList.pop_back();
	}

	return tempString;
}

string stringReversal4(string input)
{
	MyStack stringStack;
	string tempString;

	for (int i = 0; i < input.size(); i++)
	{
		stringStack.push(input[i]);
	}

	if (stringStack.isEmpty())
	{
		cout << "The string is empty." << endl;
		exit;
	}

	for (int i = 0; i < input.size(); i++)
	{
		tempString.push_back(stringStack.pull());
	}

	return tempString;
}
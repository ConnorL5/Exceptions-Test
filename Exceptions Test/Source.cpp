//Connor Lowry
//CIS 1202 501
//May 2, 2021

#include<cctype>
#include<string>
#include<iostream>
using namespace std;

char character(char, int);

int main()
{
	
	try
	{
		cout << character('a', 1);
	}
	catch(string exception)
	{
		cout << exception;
	}

	cout << "\n";

	try
	{
		cout << character('a', -1);
	}
	catch (string exception)
	{
		cout << exception;
	}

	cout << "\n";

	try
	{
		cout << character('z', -1);
	}
	catch (string exception)
	{
		cout << exception;
	}

	cout << "\n";

	try
	{
		cout << character('?', 5);
	}
	catch (string exception)
	{
		cout << exception;
	}

	cout << "\n";

	try
	{
		cout << character('A', 32);
	}
	catch (string exception)
	{
		cout << exception;
	}

	cout << "\n";
}

//Tests various exceptions
char character(char start, int offset)
{
	string invalidCharacterException = "Invalid Character Exception";
	string invalidRangeException = "Invalid Range Exception";

	if (!isalpha(start))
		throw invalidCharacterException;

	if (start >= 97 && start <= 122)
	{
		if (!isalpha(start + offset))
			throw invalidRangeException;
		if ((start + offset) < 97 || (start + offset) > 122)
			throw invalidRangeException;
	}

	if(start >= 65 && start <= 90)
	{ 
		if (!isalpha(start + offset))
			throw invalidRangeException;
		if ((start + offset) < 65 || (start + offset) > 90)
			throw invalidRangeException;
	}
	return (start + offset);
}
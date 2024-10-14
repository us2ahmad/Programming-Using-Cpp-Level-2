#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace InputLib 
{
	short ReadPositiveNumber(const string& message)
	{
		short number = 0; 
		do 
		{
			cout << message <<"\n";
			cin >> number;

		} while (number < 0);
	
		return number;
	}

	string ReadText(const string& message) 
	{
		string text;
		cout << message<<endl;
		getline(cin,text);
		return text;
	}

	char ReadChar(const string& message) 
	{
		char text;
		cout << message<<endl;
		cin >> text;
		return text;
	}


	
	void ReadArray(int array[],short& lengthArray)
	{
		lengthArray = ReadPositiveNumber("Please Enter Array Length : ");
		cout << "Enter Array Element : \n";

		for (short i = 0; i < lengthArray; i++)
		{
			cout << "Element[" << i + 1 << "] : ";
			cin >> array[i];
			cout << endl;
		}
	}
}
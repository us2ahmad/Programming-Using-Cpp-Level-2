//#include <iostream>
//#include <vector>
//#include "InputLib.h"
//
//using namespace std;
//
//void FillVector(vector<int>& vNumbers) 
//{
//	char again = ' ';
//	do
//	{
//		vNumbers.push_back(InputLib::ReadPositiveNumber("Please Enter Number"));
//		
//		again = InputLib::ReadChar("Do You Want Enter Number Again ?");
//
//	} while (again == 'Y' || again == 'y');
//}
//
//void PrintVector(const vector<int>& vNumbers)
//{
//	cout << "\nVector Values : ";
//	for (const int& Number : vNumbers) 
//	{
//		cout << Number << "\t";
//	}
//}
//
//int main() 
//{
//	vector<int> vNumbers;
//	FillVector(vNumbers);
//	PrintVector(vNumbers);
//	return 0;
//}
//
////void Test() 
////{
////	vector<int> vNumbers;
////	vNumbers.push_back(10);
////	vNumbers.push_back(20);
////	vNumbers.push_back(30);
////	vNumbers.push_back(40);
////	vNumbers.push_back(50);
////	vNumbers.push_back(60);
////	vNumbers.push_back(70);
////	vNumbers.push_back(80);
////	vNumbers.push_back(90);
////	cout << "Vector Element : ";
////	for (int& Number : vNumbers)
////	{
////		cout << Number << " ";
////	}
////
////}
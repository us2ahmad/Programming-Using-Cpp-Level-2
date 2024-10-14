//#include <iostream>
//#include <vector>
//#include "InputLib.h"
//
//using namespace std;
//
//struct stEmployee
//{
//	string FirstName = " ";
//	string LastName = " ";
//	float Salary = 0.0;
//};
//
//void FillVector(vector<stEmployee>& vEmployee)
//{
//	char readMore = 'Y';
//	stEmployee temp;
//
//	while (readMore == 'Y' || readMore == 'y')
//	{
//		temp.FirstName = InputLib::ReadText("please eneter first name : ");
//		temp.LastName = InputLib::ReadText("please eneter last name : ");
//		temp.Salary = InputLib::ReadPositiveNumber("Please Eneter Salary : ");
//
//		vEmployee.push_back(temp);
//
//		readMore = InputLib::ReadChar("Do You Want Enter Number Again ?");
//	}
//
//
//}
//
//void PrintVector(const vector<stEmployee>& vEmployee)
//{
//	for (const stEmployee& Number : vEmployee)
//	{
//		cout << "First Name : " << Number.FirstName << "\n";
//		cout << "Last Name  : " << Number.LastName << "\n";
//		cout << "Salary     : " << Number.Salary << "\n";
//	}
//}
//
//int main()
//{
//	vector<stEmployee> vEmployee;
//	
//	FillVector(vEmployee);
//	PrintVector(vEmployee);
//
//	return 0;
//}
//
////struct stEmployee
////{
////	string FirstName = " ";
////	string LastName = " ";
////	float Salary = 0.0;
////};
////
////void FillVectorEmploee(vector<stEmployee>& vEmployee)
////{
////	stEmployee tempEmp;
////	tempEmp.FirstName = "Ahmad";
////	tempEmp.LastName = "Tabash";
////	tempEmp.Salary = 5000;
////	vEmployee.push_back(tempEmp);
////
////	tempEmp.FirstName = "Ayman";
////	tempEmp.LastName = "Ayman";
////	tempEmp.Salary = 305;
////	vEmployee.push_back(tempEmp);
////
////	tempEmp.FirstName = "bayan";
////	tempEmp.LastName = "Albg";
////	tempEmp.Salary = 1000;
////	vEmployee.push_back(tempEmp);
////}
////
////void PrintVectorEmploee(const vector<stEmployee>& vEmployee)
////{
////	for (const stEmployee& Employee : vEmployee)
////	{
////		cout << "First Name : " << Employee.FirstName << "\n";
////		cout << "Last  Name : " << Employee.LastName << "\n";
////		cout << "Salary     : " << Employee.Salary << "\n";
////		cout << "____________________________\n";
////	}
////
////}
////
////void Presentation()
////{
////	vector<stEmployee> vEmployee;
////	FillVectorEmploee(vEmployee);
////	PrintVectorEmploee(vEmployee);
////}

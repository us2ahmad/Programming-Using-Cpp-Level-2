//#include <iostream>
//
//using namespace std;
//
//short ReadNumber() 
//{
//
//	short number;
//	cout << "Please enter a number :\n ";
//	cin >> number;
//	while (cin.fail())
//	{
//		cin.clear();
//		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//		cout << "Invalid Number ,  Enter a Valid One :\n";
//		cin >> number; 
//	}
//	return number;
//}
//int main() 
//{
//	cout << "your input number is : "<< ReadNumber();
//	return 0;
//}
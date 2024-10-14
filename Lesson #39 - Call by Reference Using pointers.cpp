//#include <iostream>
//
//using namespace std;
//
//void Swap(int& number1 , int& number2) 
//{
//	int temp = number1;
//	number1 = number2;
//	number2 = temp;
//}
//
//void Swap(int* number1, int* number2)
//{
//	int temp = *number1;
//	*number1 = *number2;
//	*number2 = temp;
//}
//
//int main() 
//{
//	int a = 10,b=20;
//
//	cout << "a Before Swap : " << a << endl;
//	cout << "b Before Swap : " << b << endl;
//	cout << "___________________________\n";
//
//	Swap(a,b);
//
//	cout << "a After Ref Swap : " << a << endl;
//	cout << "b After Ref Swap : " << b << endl;
//	cout << "___________________________\n";
//
//	Swap(&a, &b);
//
//	cout << "a After Ptr Swap : " << a << endl;
//	cout << "b After Ptr Swap : " << b << endl;
//	cout << "___________________________\n";
//
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main() 
//{
//	int* ptrInt;
//	float* ptrFloat;
//
//
//	ptrInt = new int;
//	ptrFloat = new float;
//
//	*ptrInt = 15;
//	*ptrFloat = 150.50;
//
//	cout << "PtrInt Value  : " << *ptrInt <<endl;
//	cout << "PtrFloat Value  : " << *ptrFloat <<endl;
//
//	cout << "PtrInt Before Delete   : " << ptrInt << endl;
//	cout << "PtrFloat Before Delete   : " << ptrFloat << endl;
//	cout << "___________________________\n";
//	
//	delete ptrInt ;
//	delete ptrFloat;
//
//	cout << "PtrInt After Delete   : " << ptrInt <<endl;
//	cout << "PtrFloat After Delete   : " << ptrFloat <<endl;
//
//	cout << "___________________________\n";
//
//	int* ptrArray;
//
//	ptrArray = new int[10];
//
//	for (short i = 0; i < 10; i++)
//	{
//		*(ptrArray + i) = ( i + 1 ) * 10;
//	}
//
//	for (short i = 0; i < 10; i++)
//	{
//		cout << "ptrArray[" << i << "] : " << *(ptrArray + i) << endl;
//	}
//	delete[] ptrArray;
//
//	cout << "___________________________\n";
//
//	return 0;
//}
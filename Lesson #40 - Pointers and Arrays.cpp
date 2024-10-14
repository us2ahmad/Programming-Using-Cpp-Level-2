//#include <iostream> 
//
//using namespace std;
//
//int main()
//{
//	int array[] = { 10,20,30,40,50 };
//
//	cout <<"array address		" << array    << endl;
//	cout <<"array address [0]   " <<&array[0] << endl;
//	cout <<"array address [1]   " <<&array[1] << endl;
//	cout <<"array address [2]   " <<&array[2] << endl;
//	cout <<"array address [3]   " <<&array[3] << endl;
//	cout <<"array address [4]   " <<&array[4] << endl;
//
//	int* p = array;
//
//
//	cout << "________________________________________\n";
//	cout << "Array Address Of Pointer : \n";
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "array address [" << i << "]	" << (p + i) << endl;
//	}
//
//
//	cout << "________________________________________\n";
//	cout << "Array Value Of Pointer : \n";
//	for (int  i = 0; i < 5; i++)
//	{
//		cout << "array Value ["<< i << "]	" << * (p+i) << endl;
//	}
//
//	return 0;
//}

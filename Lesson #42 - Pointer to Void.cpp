//#include <iostream> 
//
//using namespace std;
//
//void FillArray(int* array, const int& size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		*(array + i) = i * 2;
//	}
//}
//
//void PrintArray(int* array, const int& size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(array + i) << endl ;
//	}
//}
//
//int main() 
//{
//	void* ptr;
//
//	int x = 10;
//
//	ptr = &x;
//
//	cout << "ptr : " << ptr << endl;
//	cout << "ptr value : " << *(static_cast<int*>(ptr))<<endl;
//
//	int array[5];
//	
//	FillArray(array,5);
//	PrintArray(array,5);
//
//	return 0;
//}
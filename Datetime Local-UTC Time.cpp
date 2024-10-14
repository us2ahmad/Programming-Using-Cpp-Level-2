//#include <iostream>
//#include <ctime>
//
//#pragma warning(disable : 4996)
//using namespace std;
//
//int main() 
//{
//	time_t timee = time(0);
//
//	char* datetime = ctime(&timee);
//	
//	cout << "Local Date And Time is : " << datetime << endl;
//
//	tm* gmtm = gmtime(&timee);
//	datetime = asctime(gmtm);
//	
//	cout << "UTC Date And Time is : " << datetime;
//
//	return 0;
//}
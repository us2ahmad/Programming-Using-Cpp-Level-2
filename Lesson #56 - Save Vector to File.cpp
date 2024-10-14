//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//
//using namespace std;
//
//void SaveVectorToFile(const string& fileName,const vector<string>& vContent)
//{
//	fstream myFile;
//	myFile.open(fileName, ios::out);
//	
//	if (myFile.is_open())
//	{
//		for (const string& line : vContent)
//		{
//			if (line != "")
//				myFile << line << endl;
//		}
//		myFile.close();
//	}
//}
//
//int main() 
//{
//	vector<string> vContent = {"Ahmad","Sara","Yassin"};
//
//	SaveVectorToFile("MyFile.txt", vContent);
//
//
//	return 0;
//}
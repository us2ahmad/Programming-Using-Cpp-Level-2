//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//
//using namespace std;
//
//void LoadDateFormFileToVector(const string& fileName, vector<string>& vFileContent)
//{
//	fstream myFile;
//	myFile.open(fileName, ios::in);
//
//	string line;
//
//	while (getline(myFile,line))
//	{
//		vFileContent.push_back(line);
//
//	}
//		myFile.close();
//}
//
//int main() 
//{
//	vector<string>vFileContent;
//
//	LoadDateFormFileToVector("MyFile.txt",vFileContent);
//	
//	for (string& line : vFileContent)
//	{
//		cout << line << endl;
//	}
//
//	return 0;
//}
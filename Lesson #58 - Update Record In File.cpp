//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//
//using namespace std;
//
//void FillVectorFromFile(const string& fileName, vector<string>& vContent)
//{
//	fstream myFile;
//	myFile.open(fileName, ios::in);
//
//	string line = "";
//
//	if (myFile.is_open())
//	{
//		while (getline(myFile, line))
//		{
//			vContent.push_back(line);
//		}
//
//		myFile.close();
//	}
//}
//
//void SaveVectorToFile(const string& fileName, const vector<string>& vContent)
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
//
//		myFile.close();
//	}
//}
//
//void UpdateRecordFromFile(const string& fileName, const string& oldRecord,const string& newRecord)
//{
//	vector<string> vContent;
//
//	FillVectorFromFile(fileName, vContent);
//
//	for (string& line : vContent)
//	{
//		if (line == oldRecord)
//			line = newRecord;
//	}
//
//	SaveVectorToFile(fileName, vContent);
//}
//
//int main()
//{
//	UpdateRecordFromFile("MyFile.txt", "Yassin","Mahmoud");
//
//	return 0;
//}
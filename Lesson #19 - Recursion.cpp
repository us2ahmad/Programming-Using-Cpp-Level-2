//#include<iostream>
//
//using namespace std;
//
//void PrintNumbersFromNtoM(int N, int M)
//{
//    if (N <= M)  
//    {
//        cout << N << endl; 
//        PrintNumbersFromNtoM(N + 1, M);     
//    } 
//}
//
//void PrintNumbersFromMtoN(int N, int M)
//{
//    if (N <= M)
//    {
//        cout << M << endl;
//        PrintNumbersFromMtoN(N, M -1);
//    } 
//} 
//
//int PowerWithRecursion(int number, int power) 
//{
//    if (power == 0)
//        return 1;
//    
//    return number * PowerWithRecursion(number, power - 1);
//}
//
//int main() 
//{
//   // PrintNumbersFromNtoM(1, 10); 
//   // PrintNumbersFromMtoN(1, 10); 
//    cout<<"Power With Recursion : "<< PowerWithRecursion(2, 4);
//    
//    return 0;
//} 

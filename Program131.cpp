//Accept number from user and find factorial of number
#include<iostream>
using namespace std;

int Factorial (int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"ENter the number :"<<endl;
    cin>>iValue;

   iRet = Factorial(iValue);
   cout<<"Factorial is :"<<iRet <<endl;
    return 0;
}
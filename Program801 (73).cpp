/*
   Input  : 8
   Output : 2  4  6  8  10  12  14  16 

*/


#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt =0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt*2<<"\t";

    }
    cout<<endl;
}


int main()
{
   int iValue =0;
   cout<<"Enter the number :";
   cin>>iValue;

   Display(iValue);


    return 0;
}


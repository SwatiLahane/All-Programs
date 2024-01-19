
//Linear Star Pattern
/*

Input  : 10

Output : *   *   *   *   *   *  *   *   *   *

*/

#include<iostream>
using namespace std;

void Display(int iNo1)
{  
   int iCnt = 0; 
   for(iCnt = 1; iCnt <= iNo1; iCnt++)
   {
       cout<<"*"<<"\t";
   }

}

int main()
{
   int iValue1 = 0;
   int iCnt = 0;
  
  cout<<"Enter the Value :";
  cin>>iValue1;
  
  Display(iValue1);
   return 0;

}



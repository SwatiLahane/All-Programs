
//Star Pattern
/*
Input  : 10

Output : *   *   *   *   *   *  *   *   *   *
*/

#include<iostream>
using namespace std;

int main()
{
   int iValue1 = 0;
   int iCnt = 0;
  
  cout<<"Enter the Value :";
  cin>>iValue1;

  for(iCnt = 1; iCnt <= iValue1; iCnt++)
  {
      cout<<"*\t";
  }

   return 0;
}



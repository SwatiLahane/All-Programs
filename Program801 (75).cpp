
//iRow = 4 iColm = 3;
/* 1  2   3
   1  2   3
   1  2   3
   1  2   3

  */ 

#include<iostream>
using namespace std;

 void Dispaly(int iRow , int iCol)
 {
      int iCnt1 =0 ;
      int iCnt2 = 0;

      for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
      {
          for(iCnt2 = 1; iCnt2 <=iCol; iCnt2++)
          {
              cout<<iCnt2<<"\t" ;
          }
          cout<<endl;
      }
 
 }

//Entry point fucntion from where execution start

int main()
{
   int iValue1 = 0;
   int iValue2 = 0;

   cout<<"Enter Number of rows :";
   cin>>iValue1;

   cout<<"Enter Number of colm:";
   cin>>iValue2;

   Dispaly(iValue1, iValue2); //fucntion call

 

    return 0;
}
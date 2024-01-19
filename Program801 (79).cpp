
/*  Input  : iRow = 3 iCol = 5
     Output :  5   4   3  2  1
               5   4   3  2  1
               5   4   3  2  1
               5   4   3  2  1

*/
//using oop template 
#include<iostream>
using namespace std;

class Patterns
{
     private:
     int iRow;
     int iCol;

    
    public :
     Patterns(int A, int B)

     {
       iRow = A;
       iCol = B;

     }

     void Display()
     {
         int iCnt1 =0;
         int icnt2 =0;

         for(iCnt1 =1; iCnt1 <= iRow; iCnt1++)
         {
             for(icnt2 = iCol; icnt2 >= 1; icnt2--)
             {
                 cout<<icnt2<<"\t";
             }
             cout<<endl;
         }
     }
};



int main()
{

   int iValue1 = 0;
   int iValue2 = 0;

   cout<<"Enter Number of rows :";
   cin>>iValue1;

   cout<<"Enter Number of colm:";
   cin>>iValue2;


   Patterns pobj(iValue1, iValue2);
   pobj.Display();


   return 0;

}
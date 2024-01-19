
/*  Input  : iRow = 4 iCol = 5
    Output :   *   *   *  *
               #   #   #  #  
               *   *   *  *  
               #   #   #  #  
               
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
         int iCnt2 =0;

         for(iCnt1 =1; iCnt1 <= iRow; iCnt1++)
         {
             for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
             {
                if(iCnt1 % 2 == 0 )
                {
                    cout<<"#"<<"\t";
                }
                else
                {
                    cout<<"*"<<"\t";
                }
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


   Patterns *pobj =new Patterns(iValue1, iValue2);
   pobj->Display();
 

   return 0;

}
/*
   Input :  iRow = 4   iCol = 4 
    
    Output :   A  B  C  D
               A  B  C  D
               A  B  C  D
               A  B  C  D

  */


#include<iostream>
using namespace std;


class Patterns
{
 
   private :
     int iRow ;
     int iCol;

     public :

     Patterns(int A, int B)
     {
        iRow = A;
        iCol = B;

     }

     void Dispaly()
     {
         int iCnt1 = 0;
         int iCnt2 = 0;
         char ch = '\0';
        for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
        {
            for(iCnt2 =1, ch ='A'; iCnt2 <= iCol; iCnt2++,ch++)

            {  
                cout<<ch<<"\t";
                
            }
            cout<<endl;
        }
    
     }
 };



int main()
{

   int iValue1 = 0;
   int iValue2 = 0;

   cout<<"Enter number of Rows :";
   cin>>iValue1;

   cout<<"Enter Number of colms :";
   cin>>iValue2;

   
   Patterns *pobj = new Patterns(iValue1,iValue2);
   pobj->Dispaly();

    return 0;
}
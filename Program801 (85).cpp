/*
      1  2   3   4  
      5  6   7   8 
      9  10  11  12
      
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
         int iNo = 1; 

        for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
        {
            for(iCnt2 =1; iCnt2 <= iCol; iCnt2++)

            {  
                cout<<iNo<<"\t";
                iNo++;
                
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

   delete pobj;

    return 0;
}
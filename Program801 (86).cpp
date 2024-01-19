/* Input : iRow = 5 iCol = 5
  Output :  
            a  b  c  d  e 
            1  2  3  4  5
            a  b  c  d  e
            1  2  3  4  5

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
            for(iCnt2 =1,ch = 'a'; iCnt2 <= iCol; iCnt2++,ch++)

            {  

                if(iCnt1 % 2 == 0)
                {
                   cout<<iCnt2<<"\t";
                }
                
                else
                {
                    cout<<ch<<"\t";
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

   cout<<"Enter number of Rows :";
   cin>>iValue1;

   cout<<"Enter Number of colms :";
   cin>>iValue2;

   
   Patterns *pobj = new Patterns(iValue1,iValue2);
   pobj->Dispaly();

   delete pobj;
    return 0;
}
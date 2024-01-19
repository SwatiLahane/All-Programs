
//Linear Star Pattern
/*

Input  : 10

Output : *   *   *   *   *   *  *   *   *   *

*/



#include<iostream>
using namespace std;
//Using oop templete

class Pattern 
{
    private :
       int iNo;
       
    public :
     Pattern(int A )
    {
      iNo = A;
     

    }   

   void Display()
    {
        int iCnt =0;
        for(iCnt = 1; iCnt <=iNo ; iCnt++)
        {
            cout<<"*"<<"\t";
        }
    }


};


int main()
{

  int iValue1 = 0;
  int iValue2 = 0;

  cout<<"Enter the Number  :";
  cin>>iValue1;

  
  Pattern pobj(iValue1);
  pobj.Display();


}



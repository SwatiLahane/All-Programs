
//input : 4
//outpuut: #  1  *  #  2  *  #  3  *  #  4  *


#include<iostream>
using namespace std;


class Pattern
{
    private:
    int iNo;

    public:
    Pattern(int A)
    {
        iNo = A;

    }
    void Display()
    {
        int iCnt =0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout<<"#"<<"\t"<<iCnt<<"\t"<<"*"<<"\t";
        }
        cout<<endl;
    }

};


int main()
{
   
   int iValue =0; 
   cout<<"Enter Number :";
   cin>>iValue;

  // Pattern *pobj = new Pattern(iValue);
   //pobj->Display();
  
  Pattern pobj(iValue);
  pobj.Display();


    return 0;
}
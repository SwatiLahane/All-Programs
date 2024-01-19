/*
   Input  : 5
   Output : A  B  C  D
*/
//using oop template 

#include<iostream>
using namespace std;

class Pattern 
{
    private :
    int iNo ;


    public:
     Pattern(int A)
    { 
      iNo = A;
    } 

    void Display()
    {
        int  icnt=0;
        char ch =  '\0';
        for(icnt =1, ch ='A' ;icnt <= iNo; icnt++,ch++)
        {
         cout<<ch<<"\t";
        }
    }
};



int main()
{
   int iValue1 =0;
   
   cout<<"Enter number :";
   cin>>iValue1;
   
   Pattern pobj(iValue1);

   pobj.Display();


    return 0;
}
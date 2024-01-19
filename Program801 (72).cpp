
#include<iostream>
using namespace std;

//USing oop Template 
 /*
   Input  : 5
   Output : 5 #  4  #  3  #  2  #  1  #

*/

class Pattern
{
   private:
      int iRow ;
      

      public:

      Pattern(int A)
      {
        iRow = A;
       

      }
    void Display()
    {
        int icnt1 =0;
       

        for(icnt1 = iRow; icnt1 >= 1 ; icnt1--)
        {
            
            cout<<icnt1<<"  #"<<"\t";
        
        }
        cout<<endl;
    }    
};



int main()
{

    int iValue1 = 0;
    

    cout<<"Enter number of Rows :"<<endl;
    cin>>iValue1;

    Pattern *pobj = new Pattern(iValue1);
    pobj->Display();

    delete pobj;

    return 0;

}
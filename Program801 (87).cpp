/*  
    Input : iRow = 4  ,  iCol = 4
    *
    *  *
    *  *   *
    *  *   *   *
 */
#include<iostream>
using namespace std;

 class Pattern
{
   private:
      int iRow ;
      int iCol;

      public:

      Pattern(int A, int B)
      {
        iRow = A;
        iCol = B;

      }
    void Display()
    {
        int icnt1 =0;
        int icnt2 =0;

        for(icnt1 = 1; icnt1 <= iRow; icnt1++)
        {
            for(icnt2 = 1; icnt2 <=iCol-1 + iRow; icnt2++)
            {
                cout<<"*"<<"\t";
            }

            cout<<endl;
        }
    }
};



int main()
{

    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter number of Rows :"<<endl;
    cin>>iValue1;

    cout<<"Enter number of cols :"<<endl;
    cin>>iValue2;

    Pattern *pobj = new Pattern(iValue1, iValue2);
    pobj->Display();

    delete pobj;

    return 0;

}
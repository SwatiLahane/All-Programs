#include<iostream>
using namespace std;

class Array
{
public:
    int *Arr;
    int Size;


    Array(int Length);
    ~Array();
    void Accept();
    void Display();
    int Addition();


};

int Array :: Addition()
{
    int Sum = 0, iCnt =0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

Array :: Array(int Length)
    {
    Size = Length;
    Arr = new int[Size];
    }

   Array:: ~Array()
    { 
    delete []Arr;
    }

    void Array :: Accept()
    {
        cout<<"Enter the eleemnts : \n";
        int iCnt = 0;

        for(iCnt = 0; iCnt < Size; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

void Array :: Display()
    {
        cout<<"Elements of the Array are : \n";
        int iCnt = 0;

        for(iCnt = 0; iCnt < Size; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
    }



int main()
{

int iRet = 0;
Array obj(5);
obj.Accept();
 obj.Display();

 iRet = obj.Addition();
 cout<<"Addition is : "<<iRet;

return 0;

}
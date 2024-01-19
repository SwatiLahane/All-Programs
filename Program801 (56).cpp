

//accept n numbers from user and return Odd count of numbers  

#include<stdlib.h>
#include<iostream>
using namespace std;


void OddDisplay(int Arr[],int ilength)
{
     int icnt = 0;

      cout<<"\nOdd Elements of the array are : \n";
     //    1          2             3
    for(icnt = 0; icnt < ilength; icnt++)
    {
        if(Arr[icnt] % 2 != 0) //4
        {
           cout<<Arr[icnt]<<"\n";
        }
    }
  

} 

int main()
{    
    int iSize = 0;
    int *ptr = NULL; 
    int icnt =0, iRet =0;
    cout<<"Enter number of elements :";
    cin>>iSize;

    ptr = new int[iSize];
    cout<<"Dynamic mempory allocated successfully for "<<iSize<<"elements"<<"\n";
    
    cout<<"Ententer Elements "<<iSize<<"\n";

    for(icnt = 0; icnt < iSize; icnt++)
    {
        cout<<"Enter Element "<<icnt + 1 <<":";
        cin>>ptr[icnt];
    }
    
     OddDisplay(ptr, iSize);//function call

    delete []ptr;//100
    cout<<"Dynamic memory deallocated successfully.....";
    

    
    return 0;
}


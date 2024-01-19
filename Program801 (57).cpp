

//accept n numbers from user and return Odd count of numbers  

#include<stdlib.h>
#include<iostream>
using namespace std;

//void Display(int *Arr,int iSize) Arr is pointer
int Addition(int Arr[],int ilength)
{
     int icnt = 0;
     int iSum =0 ;

      //cout<<"\nAddition of the array elements are : \n";
     //    1          2             3
    for(icnt = 0; icnt < ilength; icnt++)
    {
       
           iSum = iSum + Arr[icnt]; //4
        
    }
     return iSum;

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
    
    cout<<"Enter Elements "<<iSize<<"\n";
     
        //  1           2         3
    for(icnt = 0; icnt < iSize; icnt++)   //O(N)
    {
        cout<<"Enter Element "<<icnt + 1 <<":"; //4
        cin>>ptr[icnt];
    }
    
     iRet = Addition(ptr, iSize);//function call
     
     cout<<"Addition of all the elements of Array is :"<<iRet<<"\n";
    delete []ptr;//100
    cout<<"Dynamic memory deallocated successfully.....";
    

    
    return 0;
}


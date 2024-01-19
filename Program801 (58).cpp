

//accept n numbers from user and return Odd count of numbers  

#include<stdlib.h> //new delete 
#include<iostream> //cout cin
using namespace std;

//void Display(int *Arr,int iSize) Arr is pointer
int EvenAddition(int Arr[],int ilength)
{
     int icnt = 0;
     int iSum =0 ;

      //cout<<"\nAddition of the array elements are : \n";
     //    1          2             3
    for(icnt = 0; icnt < ilength; icnt++)
    {
           if(Arr[icnt] % 2 == 0)
           {
              iSum = iSum + Arr[icnt]; //4
           }
           
        
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
    
     iRet = EvenAddition(ptr, iSize);//function call
     
     cout<<"Even Addition of all the elements of Array is :"<<iRet<<"\n";
    delete []ptr;//100
    cout<<"Dynamic memory deallocated successfully.....";
    

    
    return 0;
}


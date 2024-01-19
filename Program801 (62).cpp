
//Maximum element in An Array


#include<iostream>
using namespace std;
 
 int  iMax(int Arr[],int iLength)
 {
     int icnt =0;
     int iMax = Arr[icnt];   
     
       
     for(icnt = 0; icnt < iLength; icnt++)
     {
        if(Arr[icnt] > iMax)
        {
            iMax = Arr[icnt];
        }
     }
     return iMax ;
 }

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int icnt =0 ,iRet =0; 
    
   cout<<"Enter Number of elements :";
   cin>>iSize;
   
   ptr  = new int[iSize]; // dynamic Memory allocated  
   cout<<"Dynamic memory gets allocated for"<<iSize <<"elements"<<endl;

   cout<<"Enter Elements :"<<endl;
   for(icnt = 0; icnt < iSize; icnt++)
   { 
       cout<<"Enter Element"<<icnt+1 <<":";

       cin>>ptr[icnt];
   }

   iRet = iMax(ptr, iSize);
   cout<<"Maximum Element is :"<<iRet<<endl; 
    
    delete []ptr; //100  
    cout<<"Dynamic memory gets Deallocated successfully ";

     
    return 0;
}
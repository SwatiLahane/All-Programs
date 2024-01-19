
//Summation of even Odd elements 


#include<iostream>
using namespace std;
 
 int  EvenOddSum(int Arr[],int iLength)
 {
     int icnt =0;
     int iSum1 =0;
     int iSum =0,iResult =0 ; 
       
     for(icnt = 0; icnt < iLength; icnt++)
     {
         if(Arr[icnt] % 2 == 0)
         {
           iSum = Arr[icnt] + iSum; 
         }
         else
         {
             iSum1 = Arr[icnt] + iSum1;
         }

         iResult = iSum - iSum1;
     }
     return iResult ;
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

   iRet = EvenOddSum(ptr, iSize);
   cout<<"Summation of Even Odd are :\n"<<iRet; 
    
    delete []ptr; //100  
    cout<<"Dynamic memory gets Deallocated successfully ";

     
    return 0;
}
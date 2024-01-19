
//Minimum element in An Array
/* 
  intput N : 6 
    Elements: 85 66 3 66 93 88
 
  Output : 3
*/

#include<iostream>
using namespace std;
 
 int  iMin(int Arr[], int iLength)
 {
     int icnt =0;
     int iMin = Arr[0];   
     
       
     for(icnt = 0; icnt < iLength; icnt++)
     {
        if(Arr[icnt] < iMin)
        {
            iMin = Arr[icnt];
        }
     }
     return iMin;
 }

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int icnt =0 ,iRet =0; 
    
   cout<<"Enter Number of elements :";
   cin>>iSize;
   
   ptr  = new int[iSize]; // dynamic Memory allocated  
   cout<<"Dynamic memory gets allocated for "<<iSize <<"elements"<<endl;

   cout<<"Enter Elements :"<<endl;
   for(icnt = 0; icnt < iSize; icnt++)
   { 
       cout<<"Enter Element"<<icnt+1 <<":";

       cin>>ptr[icnt];
   }

   iRet = iMin(ptr, iSize);
   cout<<"Maximum Element is :"<<iRet<<endl; 
    
    delete []ptr; //100  
    cout<<"Dynamic memory gets Deallocated successfully ";

     
    return 0;
}
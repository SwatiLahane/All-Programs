
//Print Max min
#include<iostream>
using namespace std;
 
 int  MaxMin(int Arr[], int iLength)
 {
     int icnt =0;
     int iMin = Arr[0]; 
     int iMax = Arr[0];  
     
       
     for(icnt = 0; icnt < iLength; icnt++)
     {
        if(Arr[icnt] > iMax)
        {
            iMax = Arr[icnt];
        }
        else if (Arr[icnt] < iMin)
        {
            iMin = Arr[icnt];
        }
     }
      
    cout<<"Maximum element is:"<<iMax<<endl;
    cout<<"Minimum element is:"<<iMin<<endl;
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

   MaxMin(ptr, iSize);
  
    
    delete []ptr; //100  
    cout<<"Dynamic memory gets Deallocated successfully ";

     
    return 0;
}

//Claculate frequency of perticular number  how many tims that number occur 

#include<iostream>
using namespace std;

int Frequency(int Arr[],int ilength,int iNo)
{
    int icnt = 0;
    int icount =0;

    for(icnt = 0; icnt < ilength; icnt++)
    {
       if(Arr[icnt] == iNo)
       {
          icount++;
       }

    }
    return icount;
}
int main()
{
   int iSize = 0;
   int *ptr = NULL;
   int iRet =0;
   int icnt =0,iValue =0;

   cout<<"Enter number of elements :";
   cin>>iSize;
   
    ptr = new int[iSize]; //Dynamic memory allocation 
    cout<<"Dyanamic memory gets allocated for "<<iSize <<" elements Successfully"<<endl;
    
   cout<<"Enter elements :"<<endl;

   for(icnt = 0; icnt < iSize; icnt++)
    {
       
       cout<<"Enter Element"<<icnt+1 <<":";

       cin>>ptr[icnt];
    }
     
    cout<<"Enter the elemnet that u wnat to search frequecy :"<<endl; //to search frequecny
    cin>>iValue;

    iRet = Frequency(ptr, iSize,iValue);
    cout <<"Frequency is :"<<iRet <<endl;
    
    delete []ptr; //100  
    cout<<"Dynamic memory gets Deallocated successfully ";

     
    return 0;
  
  
  
}






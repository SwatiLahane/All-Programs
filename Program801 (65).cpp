
//Claculate frequency of perticular number  how many tims that number occur 

#include<iostream>
using namespace std;

int Frequency(int Arr[],int ilength)
{
    int icnt = 0;
    int icount =0;

    for(icnt = 0; icnt < ilength; icnt++)
    {
       if(Arr[icnt] == 21)
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
   int icnt =0;

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

    iRet = Frequency(ptr, iSize);
    cout <<"Frequency of 21 is :"<<iRet <<endl;
    
    delete []ptr; //100  
    cout<<"Dynamic memory gets Deallocated successfully ";

     
    return 0;
  
  
  
}






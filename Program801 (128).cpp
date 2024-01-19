
#include<iostream>
using namespace std;

void StrUprX(char str[])
  {
     while(*str != '\0')
     {
         if((*str >= 'a') && (*str <='z'))
         {
           *str = *str - 32;
         }
         *str++;   
     } 

  }
int main()
{
     
  char Arr[20];

  cout<<"Enter String :";
  gets(Arr);

  StrUprX(Arr);

   cout<<"Updated String is :"<<Arr;

    return 0;
}
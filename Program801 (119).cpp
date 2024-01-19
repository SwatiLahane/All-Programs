

//Count small letter in string
#include<iostream>
using namespace std;

int CountCapital(char str[])
{
   int icnt =0;

   while(*str != '\0')
   {
       if(*str >= 'A' && *str <= 'Z')
       {
           icnt++;
       }
       str++;
   }
   return icnt ;
}

int main()
{
   
   char Arr[20];
   int iRet =0;
   cout<<"Enter String :";
   gets(Arr);

   iRet = CountCapital(Arr); //countsmall(100)
   cout<<"frequecy of Capital letters :"<<iRet;
  
    return 0;
}

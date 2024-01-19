

//Count small letter in string
#include<iostream>
using namespace std;

int CountSmall(char str[])
{
   int icnt =0;

   while(*str != '\0')
   {
       if(*str >= 'a' && *str <= 'z')
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

   iRet = CountSmall(Arr); //countsmall(100)
   cout<<"frequecy of Small letters :"<<iRet;
  
    return 0;
}

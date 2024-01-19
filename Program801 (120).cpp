


#include<iostream>
using namespace std;

int CountDigit(char str[])
{
   int icnt =0;

   while(*str != '\0')
   {
       if((*str >= '0') && (*str <= '9'))
       {
           icnt++;
       }
       str ++;
   }
   return icnt;
}

int main()
{
   
   char Arr[20];
   int iRet =0;
    cout<<"Enter String :";
    gets(Arr);
 
     iRet = CountDigit(Arr);
        
    cout<<"Frequecny of digit is :"<<iRet;

    return 0;
}
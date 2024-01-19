


//count space 

#include<iostream>
using namespace std;

int CountSpace(char str[])
{
   int icnt =0;

   while(*str != '\0')
   {
       if(*str == ' ')
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
 
     iRet = CountSpace(Arr);
        
    cout<<"Frequecny of digit is :"<<iRet;

    return 0;
}
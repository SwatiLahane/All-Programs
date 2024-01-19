


//Case sensitive

#include<iostream>
using namespace std;

int CountVowels(char str[])
{
   int icnt =0;

   while(*str != '\0')
   {
       if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
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
 
     iRet = CountVowels(Arr);
        
    cout<<"Frequecny of digit is :"<<iRet;

    return 0;
}
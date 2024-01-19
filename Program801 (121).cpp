



#include<iostream>
using namespace std;

int CountVowels(char str[])
{
   int icnt =0;

   while(*str != '\0')
   {
       if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
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
        
    cout<<"Frequecny of Vowel is :"<<iRet;

    return 0;
}
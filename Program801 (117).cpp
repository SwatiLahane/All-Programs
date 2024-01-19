
#include<iostream>
using namespace std;

int countChar(char str[],char ch)
{
     int icnt =0;

     while(*str != '\0')
     {
        if(*str == ch)
        {
            icnt++;
        }
        str++;
     }
     return icnt;
}

int main()
{

   char Arr[20];
   char cValue ='\0';
    int iRet =0;
   cout<<"Enter string :";
   gets(Arr);

   cout<<"Enter The Character for frequency calculation :";
   cin>>cValue;
   
   iRet = countChar(Arr,cValue);//countChar(100)
   cout<<"Frequency od character is :"<<iRet; 

    return 0;
}
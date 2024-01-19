
#include<iostream>
using namespace std;

int ConvertSmall(char cValue)
{
  return cValue + 32;
}

int main()
{
   char ch = '\0';
   char cRet = '\0';
   cout<<"Enter character :";
   cin>>ch;
   
   cRet = ConvertSmall(ch);
   cout<<"Converted Small Letter is :"<<cRet;

    return 0;
}
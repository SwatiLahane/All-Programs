

#include<iostream>
using namespace std;
 
 //Function to convert small to Capital
char ConvertCapital(char cValue)
{
    return cValue - 32;
}

int main()
{ 
   char ch = '\0';
   char cRet = '\0';
   cout<<"Enter the Character:";
   cin>>ch;

  cRet = ConvertCapital(ch);
   cout<<"Converted Letter is  :"<<cRet;
 
  
    return 0;

}
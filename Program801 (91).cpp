
//Check Small charcter 
#include<iostream>
using namespace std;

bool CheckSmall(char cValue)
{
   if((cValue >='a') && (cValue <='z'))
   {
       return true;
   }
   return false;
}

int main()
{
   
   char ch = '\0';
   bool bRet = false;

   cout<<"Enter the character:";
   cin>>ch;
   
   bRet = CheckSmall(ch);//Fucntion call

   if(bRet == true)
   {
       cout<<"It is Small character ";
   } 

   else
   {
       cout<<"It is not small character ";
   }
    return 0;
}
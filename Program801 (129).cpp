


//
#include<iostream>
using namespace std;

 void StrToggleX(char str[])
 {       
         
     while(*str != 0)
     {   
          
         if((*str >= 'A') && (*str <= 'Z'))
         {
           *str = *str + 32;

         }
         else 
         {
           *str = *str - 32;

         }
        str++;
     }
    
 }

int main()
{ 
   
   char Arr[20];
   char cRet = '\0';
   cout<<"Enter the string :";
   gets(Arr);


     StrToggleX(Arr);

    cout<<"Updated String is :"<<Arr;
    return 0;
}


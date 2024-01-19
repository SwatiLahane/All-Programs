

#include<iostream>
using namespace std;


void Display(char *str)
{
    cout<<"Your Enterd string is:"<<str;
} 


int main()
{   
   
   char Arr[20];

   cout<<"Enter the String:";
   gets(Arr);
    
    Display(Arr);
   

    return 0;
}
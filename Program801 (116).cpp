
//Accept string from user and count character a from string
#include<iostream>
using namespace std;

int Counta(char str[])
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == 'a')
        { 
             iCount++;
        }

        str++;

    }
    return iCount;

}


int main()
{

   char Arr[20];
   int iRet =0;

   cout<<"Enter String :";
   gets(Arr);

   iRet = Counta(Arr);
    cout<<"Count of a in String is :"<<iRet<<endl; 

    return 0;
}
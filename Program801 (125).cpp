

#include<iostream>
using namespace std;

//Accept string and replace _ character where character is a


void Replace(char str[])
{
    int icnt =0;

    while(*str  != '\0')
    {
        if(*str == 'a')
        {
            *str = '_';
        }
       str++; 
    }


}
int main()
{

    char Arr[20];
    int iRet =0;
    cout<<"Enter String :";
    gets(Arr);
 
     Replace(Arr);
        
    cout<<"Updated String  is:"<<Arr;

    return 0;
}


#include<iostream>
using namespace std;

//Accept string and replace _ at the place of vowels character where character is a


void ReplaceVowels(char str[])
{
    int icnt =0;

    while(*str  != '\0')
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ||*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
     
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
 
     ReplaceVowels(Arr);
        
    cout<<"Updated String  is:"<<Arr;

    return 0;
}
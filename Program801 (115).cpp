
#include<iostream>
 
 //count string length
using namespace std;

 int strLenX(char str[]) 
    {
        int icnt =0;

        while(*str != '\0')
        {
            icnt++;
            str++;
        }
        return icnt;
    }

int main()
{ 

    char Arr[20];
    int iRet =0;
    cout<<"Enter String :";
    gets(Arr);


   iRet = strLenX(Arr);//strlenX(100)

   cout<<"Length of String is :"<<iRet;

    return 0;
    
}
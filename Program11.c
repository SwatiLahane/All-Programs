#include<stdio.h>

int main()
{
   char Arr[20];

   printf("Enter the String : \n");
   scanf("%s",Arr);

   scanf("%[^'\n']s",Arr);
   printf("Enterd String is : %s\n",Arr);

  
    return 0;
}
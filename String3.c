#include<stdio.h>

int main()
{
  
   char Arr[40];
   printf("Enter your Name\n");
   scanf("%[^'\n']s",Arr);  //^ not operator String accept kara jo parient input yet nai toparient 
   
   printf("Your name is :%s",Arr);
    return 0;
}
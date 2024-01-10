#include<stdio.h>

int main()
{
   int i = 1;
   int count;

     printf("Enter number of times you want to display Jay Ganesh on screen\n");
      scanf("%d",&count);
   
   do
   {
      printf("Jay Ganesh..\n");
      i++;

   }while(i <= count);
   
    return 0;
}
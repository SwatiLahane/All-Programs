#include<stdio.h>

int main()
{
    int Standard = 0;

printf("Primary School Portal\n"); 

printf("Enter your division : \n");
scanf("%d",&Standard);

switch(Standard)
{
     case 1:
     printf("Your exam is at 1 Pm");
     break;

      case 2:
     printf("Your exam is at 2 Pm");
     break;

      case 3:
     printf("Your exam is at 3 Pm");
     break;

      case 4:
     printf("Your exam is at 4 Pm");
     break;

    default:
     printf("Invalid Standard\n");

     break;
}

 return 0;

}
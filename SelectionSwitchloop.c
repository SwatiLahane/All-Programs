#include<stdio.h>

int main()
{
  
  int i = 0;

  printf("Addmision form portal\n");

  printf("Enter the Branch u want to choose\n");
  scanf("%d" ,&i);

  switch(i)

  {
    case 1:
      printf("BE Computer sceince\n");
     
      break;
    case 2:
      printf("BE Electronics\n");
      
    break;
    case 3:
      printf("BE Mechanical\n");
      break;
    case 4:
      printf("BE Civil\n");
      break;
    default :
      printf ("Invalid case");    

  }

return 0;
}

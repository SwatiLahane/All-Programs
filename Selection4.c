
#include<stdio.h>


int main()
{

int college = 0;
printf("Enter your college degree\n");

printf("Enter The Branch\n");
scanf("%d",&college);

if(college == 1)
{
    printf("Computer science Engineering\n");
}
    
else if(college == 2)
{
    printf("Electronics Engineering\n");
}
else if(college == 3)
{
  printf("Mechanical engineering\n");
}
else if(college == 4)
{
    printf("CIvil Enginnering");
}

else
printf("Invalid optiton");


}
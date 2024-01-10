#include<stdio.h>

int main()
{
    int Standard = 0;

printf("Primary School Portal\n");

printf("Enter your division : \n");
scanf("%d",&Standard);

if(Standard == 1)
{
    printf("Your exam is at 1 Pm\n");
}

else if(Standard == 2)
{
    printf("Your exam is at 2 Pm\n");
}

else if(Standard == 3)
{
    printf("Your exam is at 3 Pm\n");
}

else if(Standard == 4)
{
    printf("Your exam is at 4 Pm\n");
}
else
{
    printf("Invalid standard\n");
}
 return 0;

}
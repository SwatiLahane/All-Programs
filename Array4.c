
#include<stdio.h>

int main()
{

    int Arr[4] = {11,21,51,101};

    printf("Base Address of Array : %d\n",Arr);

    printf("First Element is : %d\n",&Arr[0]);

    printf("Adrees of second element is : %d\n",&(Arr[1]));
     printf("Adrees of fourth element is : %d\n",&(Arr[1]));

    printf("Size of whole array : %d\n", sizeof(Arr));
    
    printf("Size of second element of Array : %d\n",sizeof(Arr[1]));

    return 0;
}
#include<stdio.h>


int main()
{
    int Arr[3][3] = {11,21,51,10,20,30,40,50,60};
   
    Arr[0][0] = 11;
    Arr[0][1] = 21;
    Arr[0][2] = 51;

    Arr[1][0] = 10;
    Arr[1][1] = 20;
    Arr[1][2] = 30;

    Arr[2][0] = 40;
    Arr[2][1] = 50;
    Arr[2][2] = 60;

    printf("First element of array %d\n",Arr[0][0]);
    printf("Size of Two Dimentional Array %d\n",sizeof(Arr));
    printf("Size of first element of Array :%d\n",sizeof( Arr[1][0]));


    return 0;
}

#include<stdio.h>

int main()

{
  //Array initialization 
  //1
  int Arr[5] = {10,20,30,40,50};

  // 2
    int Brr[ ] = {10,20,30,40,50};

    // 3
    int Crr[7] = {10,20,30}; //here We initialize less Element memeber initialization list 
     // remening gets initialised by default value

    // 4

    int Drr[3]; //Member By Member initialization
    Drr[0] = 10; 
    Drr[1] = 20;
    Drr[2] = 30;

    int Arr[4] = {10,20,30,40};

    const int Brr[4] = {10,20,30,40}; //consta element of array 
    in case of constant we cannot increment and reinitialize


    Arr[1] = 21;        // A
    Brr[1] = 21;        // NA

    Arr[2]++;           // A
    Brr[2]++;           // NA

return 0;
}
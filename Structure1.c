#include<stdio.h>


struct Demo
{
   int no;
   float f;
    int x;
    float d;


};
  int main()
{  
   struct Demo obj1; //object of structure
   struct Demo obj2;

   obj1.no =11;
   obj1.f = 10.5;
   obj1.x = 21;
   obj1.d = 20.5;

    obj2.no =11;
   obj2.f = 10.5;
   obj2.x = 21;
   obj2.d = 20.5;






   printf("Size of structure is %d\n",sizeof(obj));

    return 0;
}
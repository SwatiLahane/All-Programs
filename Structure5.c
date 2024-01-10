#include<stdio.h>

struct Demo
{

 int i;
 float f;
 int j;


};

int main()
{

    struct Demo obj1;
    struct Demo obj2;

    struct Demo *ptr = NULL;

    ptr = &obj2;

    obj1.i = 11;
    obj1.f = 90.99;
    obj1.j = 21;


    ptr->i  =51;
    ptr->f =90.88;
     ptr->j =101;

   // obj2.i  =51; we can dirc=ectly use obj2 and 
   //. operator directly insted of ptr ->i
    //obj2.f =90.88;
     //obj2.j =101;

     printf("%d\n" , obj1.i);
    // printf("%d\n",obj2.i);
    printf("%d\n",ptr->i);
    return 0;

}


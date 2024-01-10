#include<stdio.h>

int main()
{
  char ch ='A';
  int i = 21;
  float f = 12.31f;
   double d = 89.90;

  printf("Size of character is : %d byetes\n",sizeof(ch));
  printf("Size of integer is : %d byetes\n",sizeof(i));
  printf("Size of float is : %d byetes\n",sizeof(f));
  printf("Size of double is : %d byetes\n",sizeof(d));
 
 printf("Base Address of character is :%d\n" ,&ch);
 printf("Base Address of integer  is :%d\n" ,&i);
 printf("Base Address of float is :%d\n" ,&f);
 printf("Base Address of double is :%d\n" ,&d);


    return 0;
}
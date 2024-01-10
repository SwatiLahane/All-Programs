#include<stdio.h>

#pragma pack(1) //To Avoid loass Of memory because of padding we us Pragma pack
//It should Recomnd to write for each structure sepratly u can write also also but its good programming practice to write seprately

struct Demo
{
    int i;
    char  ch;
    float f;
    
    double d;

};

int main()
{

  struct Demo obj;
  printf("Size of object is : %d\n",sizeof(obj));
  
    return 0;
}

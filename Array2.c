#include<stdio.h>


int main()
{

    char cArr[4] = {'A','B','C','D'};

    int iArr[4] ={11 ,21,51,101};

    float fArr[4] ={10.5,21.0,51.0,101.0};

    double dArr[4] ={11.0, 21.0,51.0,101.0};



 printf("%c\n",cArr[0]); //A
 printf("%d\n",iArr[1]); //11
 printf("%f\n",fArr[2]); // 51.0
 printf("%f\n",dArr[3]); //101.0

 printf("Size of Array is %d\n",sizeof(cArr));// 4 byte
 printf("Size of Array is %d\n",sizeof(iArr));//16 byte
 printf("Size of Array is %d\n",sizeof(fArr)); //16 byte
 printf("Size of Array is %d\n",sizeof(dArr));//32 byte

    

}
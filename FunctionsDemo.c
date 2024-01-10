#include<stdio.h>

int Addition(int No1 , int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int Subtraction(int Sub1 ,int Sub2){

     int Result = 0;
    Result =  Sub1 - Sub2;
    
    return Result;
  
}

int Division(int div1 ,int div2)
{
   int Res = 0;  
   Res = div1 / div2;
   
   return Res; 

}
int main()
{
   int Value1 = 0;
   int Value2 = 0;
   int Ret = 0;
 
  printf("Enter first number : \n");
  scanf("%d" ,&Value1);

  printf("Enter second number : \n");
  scanf("%d" ,&Value2);

  Ret  = Addition(Value1,Value2);
  printf("Addition  is   : %d\n",Ret);

  Ret = Subtraction(Value1,Value2);
  printf("Subtraction is : %d\n",Ret);

  Ret = Division(Value1 ,Value2);
  printf("Division is    : %d\n",Ret);

  return 0;

}
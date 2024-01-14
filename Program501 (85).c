
/*
Input : 5
Output :A B C D E 
Program Layout :
*/
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Pattern 
//            Function Description   :Function to print linear Pattern
//            Input Argument         :Integer 
//            Output Argument        :Character     
//            Author:                : Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//1.Accept Number From user and display below pattern.

//Naked Function

void Pattern(int iNo)   
{   
    char ch = 'A' ; 
    int iCnt = 0;
    for(iCnt = 0,ch ='A' ;iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c ",ch); 
    }
}

  ////////////////////////////////////////////////////////////////////////////////
  // 
  //            Entry Point FUnction from where execution gets starts 
  //
  /////////////////////////////////////////////////////////////////////////////////
 
  int main()
 
 {

   int iValue = 0;  //Loacal variable
   printf("Enter the number :");
   scanf("%d",&iValue);
   
   Pattern(iValue); //Function call
   

    return 0;
}
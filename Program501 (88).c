


//Accept Number from user and display below pattern. 

/*
Input  : 5
Output :#  1 *  #  2  *  #  3  *  4  *  5  *

Program layout :

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Pattern 
//            Function Description   :Function to print Linear pattern
//            Input Argument         :Integer 
//            Output Argument        :Integer
//            Date                   : 04 Nov       
//            Author:                : Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iNo)

{ 
   int iCnt = 0;
   for(iCnt = 1 ; iCnt <= iNo; iCnt++)
   {
       printf("#\t%d\t*\t ",iCnt);
   }
      
}

int main()

{
    auto int iValue = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    Pattern(iValue); 

    return 0;

}
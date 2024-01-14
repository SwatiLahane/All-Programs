
//Accept Number from user and display below pattern. 

/*
Input  : 5
Output :1 * 2 * 3 * 4 * 5 *

Program layout :

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Pattern 
//            Function Description   :Function to print number pattern ,which contains 4 rows and 4 colm 
//            Input Argument         :Integer
//            Output Argument        :Integer        
//            Author:                : Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h> //For printf and scanf

void Pattern(int iNo)

{ 
   int iCnt = 0;
   for(iCnt = 1 ; iCnt <= iNo; iCnt++)
   {
       printf("%d\t*\t",iCnt);
   }
      
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//       
//           Main function from where execution starts
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()

{
    auto int iValue = 0; //Local variables
    printf("Enter the number :");
    scanf("%d",&iValue);
 
    Pattern(iValue);  //Fucntion call

    return 0;

}
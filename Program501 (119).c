

//     1   2   3   4
//         2   3   4
//             3   4   
//                 4

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Pattern 
//            Function Description   :Function to print star pattern ,which contains 4 rows and 4 colm 
//            Input Argument         :Integer ,Integer
//            Output Argument        :Integer, Integer
//            Date                   :11 Nov       
//            Author:                :Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
   int iCnt1 = 0;
   int iCnt2 = 0;
   for(iCnt1 =1; iCnt1 <=iRow; iCnt1++)  //Inner loop 
   {        
         
       for(iCnt2 = 1; iCnt2 <=iCol; iCnt2++) //Outer loop
       {

        if(iCnt2 >= iCnt1)     //Logic
        {
           printf("%d\t",iCnt2);
        }
        
       else
       {
           printf("\t"); //For space
       }

      }
       printf("\n\n"); //for next line
   
    }
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function from where execution get starts
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   
   int iValue1 = 0;  //local varible 
   int iValue2 = 0; //Local variable

   printf("Enter Number of rows :\n"); 
   scanf("%d",&iValue1);

   printf("Enter Number of columns :\n");
   scanf("%d",&iValue2);

   Pattern(iValue1,iValue2);  //Function call

    return 0;

}
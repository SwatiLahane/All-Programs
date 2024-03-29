
//   irow = 5 icol = 5 

//      1  2  3  4   5  
//      1  2         5 
//      1     3      5
//      1         4  5
//      1  2  3   4  5   

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Pattern 
//            Function Description   :Function to print star pattern ,which contains 4 rows and 4 colm 
//            Input Argument         :Integer ,Integer
//            Output Argument        :Integer, Integer
//            Date                   :12 Nov         
//            Author:                :Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
   int i = 0;
   int j = 0;

   for(i =1; i<=iRow; i++)  //Inner loop
   {
       for(j =1; j <=iCol; j++) //Outer loop
       {

         if( j == i || i==1|| i==iRow || j==1 || j==iCol) 
    
        {
           printf("%d\t",j);
        }
        else
        {
            printf("\t");
        }
      }
       printf("\n\n");
   
    }
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function from where execution get starts
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   
   int iValue1 = 0;
   int iValue2 = 0;

   printf("Enter Number of rows :\n");
   scanf("%d",&iValue1);

   printf("Enter Number of columns :\n");
   scanf("%d",&iValue2);

   Pattern(iValue1,iValue2);

    return 0;

}
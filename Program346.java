import java.util.*;

//make changes
//Sum of all the Matrix 
class Matrix
{
    public void Display(int Arr[][])
    { 
        int i = 0 , j = 0; 
        System.out.println("Entered elements are : ");
         
        for( i=0; i < Arr.length; i++)
        {
            for(j= 0; j < Arr[i].length; j++)
            {
                System.out.println(Arr[i][j]);              }
             
            }
            System.out.println(); 
         
        }
       
    }

} 
    public int Summation(int Arr[][])
    {
        int i = 0 , j = 0, iSum = 0; 
        System.out.println("Entered elements are : ");
         
        for( i=0; i < Arr.length; i++)
        {
            for(j= 0; j < Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }

            System.out.println(); 
         
        }
       
    } 

    return iSum;
    
}

    

class Program346
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Number of columns : ");
        int iCol = sobj.nextInt();

        int Arr[][] = new int[iRow] [iCol];
        int i =0 , j = 0;
        int iRet = 0;

        System.out.println("Enter the elements :");
          
        for( i=0; i < iRow; i++)  //outer 
        {
            for( j= 0; j < iCol; j++) //Inner
            {
                Arr[i][j] = sobj.nextInt();
            }

        }

        Matrix mobj = new Matrix();
        mobj.DisplaySum(Arr);
       
        iRet = mobj.Summation(Arr);
       System.out.println("Sum of matrix :"+iRet);
    }

}   
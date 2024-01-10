import java.util.*;

//problems on Matrix
class Program344
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

        System.out.println("Enter the elements :");
          
        for( i=0; i < iRow; i++)  //outer 
        {
            for( j= 0; j < iCol; j++) //Inner
            {
                Arr[i][j] = sobj.nextInt();
            }

        }

        System.out.println("Entered elements are : ");
         
        for(int i=0; i < iRow; i++)
        {
            for(int j= 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t"); 
            }

            System.out.println(); 
         
        }
    }
}
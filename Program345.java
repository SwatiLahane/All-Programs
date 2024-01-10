import java.util.*;

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
                System.out.print(Arr[i][j]+"\t"); 
            }

            System.out.println(); 
         
        }
    }
}

    

class Program345
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

        Matrix mobj = new Matrix();
        mobj.Display(Arr);

    }

}   
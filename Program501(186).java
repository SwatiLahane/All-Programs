//1.Write entry point function accept one number from user and count number of ON 1 bits in it without using % and / operator



import java.util.*;

class Program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iDigit = 0;
        int iCount =0; 

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        while(iNo != 0)
        {   
            
            
            iDigit =iNo % 2;

            iNo = iNo / 2;
            
            if(iDigit == 1)
            {
                iCount++;
            }
            
        }

        System.out.println(" "+iCount);
    }
}



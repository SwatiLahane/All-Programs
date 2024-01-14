
//display small number 
import java.util.*;

class Arithematic
{
    public int DisplaySmall(int iNo1, int iNo2)
    {
        if(iNo1 < iNo2)
        {
            return iNo1;
        }
        else
        {
            return iNo2;
        }
    }
    
}

class Program27
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();

        System.out.println("Enter First Number :");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Second Number :");
        int iValue2 = sobj.nextInt();

        int iRet = aobj.DisplaySmall(iValue1,iValue2);

       System.out.println("Smallest Number is :"+iRet);
    }
}
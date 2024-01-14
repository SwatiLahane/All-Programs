
//Calculate maximum number between two numbers

import java.util.*;

class Arithematic
{
     public int Max(int iNo1, int iNo2)
     {
         if(iNo1 >= iNo2)
         {
             return iNo1;
         }
         else
         {
             return iNo2;
         }
     }
} 


class Program25
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();
            int iValue1 = 0 , iRet = 0;
            int iValue2 = 0;
            
            System.out.println("Enter First Number :");
            iValue1 = sobj.nextInt();
           
            System.out.println("Enter Second Number :");
            iValue2 = sobj.nextInt();
            
            iRet = aobj.Max(iValue1, iValue2);

           
            System.out.println("Largest Number is : "+iRet);
            
        
    }
}
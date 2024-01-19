
//Write a program which accept one number from user and check wheather 9th and 12 th bit is On Or OFF


import java.util.*;


class Program3
{
    public static boolean ChkBit(int iNo)
    {
        int iMask   =  0X00000100;
        int iResult = 0;
        
        iResult = iNo & iMask;
         
        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean iRet = false;

        System.out.println("Enter the Number :");
        iNo = sobj.nextInt();
         
        
        iRet = ChkBit(iNo); //Function call
        
        if(iRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }

}
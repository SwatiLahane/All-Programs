

//check 7th and 15th bit 

import java.util.*;

class Program9

{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 260;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == iMask )
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
        int iValue =0;
        boolean bRet =false;

        System.out.println("Enter Number:");
        iValue = sobj.nextInt();
       

        bRet = CheckBit(iValue);
        
        if(bRet == true)
        {
            System.out.println("3rd and 9th bit is ON");
        }
        else
        {
            System.out.println("Bits are OFF");
        }
        
    }
}
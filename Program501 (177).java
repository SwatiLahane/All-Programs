//1.Write a program which accept one number from user and off 7th and 10th  bit of that number if it is on.and return modified nunber


//Input :577
//Output:1

import java.util.*;

class Program2
{   
    public static int OffBit(int iNo)
    {
            int iResult =0 ;
            int iMask = 0X00000240; 

            iResult = iNo & iMask; //To check bit is on
            
            if(iResult == iMask)
            {
                return iMask ^ iNo;
            }

            else
            {
                return iNo;
            }
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet =0;

        System.out.println("Enter Number:");
        iNo = sobj.nextInt();
        
        iRet = OffBit(iNo);
        System.out.println("Upadated Number is :"+iRet);


    }
}
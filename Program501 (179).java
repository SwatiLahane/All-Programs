//1.Write a program which accept one number from user and Toggle  7th and 10th bit of that number
//Return modified number


//Input :137
//Output:713

import java.util.*;

class Program4
{   
    public static int ToggleBit(int iNo)
    {
            int iResult =0 ;
            int iMask = 0X00000240; 
            
            iResult = iNo ^ iMask; //7th bit toggle

            return iResult;
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet =0;

        System.out.println("Enter Number:");
        iNo = sobj.nextInt();
        
        iRet = ToggleBit(iNo);

        System.out.println("Upadated Number is :"+iRet);


    }
}
//1.Write a program which accept one number from user and ON its first 4 bits //return modified number

//Incomplete Logic 

//Input :73
//Output:79

import java.util.*;

class Program5
{   
    public static int ONBits(int iNo)
    {
            int iResult =0 ;
            int iMask = 0X00000049; 
            
            iResult = iNo ^ iMask; //on First 4 bit toggle

            return iResult;
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet =0;

        System.out.println("Enter Number:");
        iNo = sobj.nextInt();
        
        iRet = ONBits(iNo);

        System.out.println("Upadated Number is :"+iRet);


    }
}
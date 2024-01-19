//1.Write a program which accept one number from user and off 7th bit of that number if it is on. and return modified number

import java.util.*;

//Input : 79
//Output: 15

class Program1
{
    public static int OffBit(int iNo)
    {
         int iMask = 0X00000040 ;  //
         int iResult = 0;

         iResult = iNo & iMask; //to check bit is on 
         
        if(iResult == iMask)  //oFF Bit 7th
        {
            return(iNo ^ iMask); //7th bit is on
        }
         
        else
        {
            return iNo; 
        }
         

    }
    public static void main(String args[])
    {

        Scanner sobj = new Scanner(System.in);
        int iRet = 0;
        int iNo = 0;
        
        System.out.println("Enter the number :");
        iNo = sobj.nextInt();
         
        iRet = OffBit(iNo); 
        
        System.out.println("Updated Number is:"+iRet);

    }
}


//Write a Program which accept one number ,two position from user and check wheather bit at first or bit at second position is ON OFF

import java.util.*;



class Program4
{   
    public static boolean CheckBit(int iNo,int iPos1,int iPos2)
    {

        int iMask = 0X00000001;
        int iMask1 = 0X00000001;
        int iRet = 0, iResult = 0; 
        
        
        iMask = iMask << (iPos1 - 1) ; 
        iMask1 = iMask1 << (iPos2 - 1);
        
        iResult = iNo & iMask;
        iResult = iNo & iMask1;

        if((iResult == iMask ) && (iResult == iMask1))
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
       int iPos1 = 0;
       int iPos2 = 0;
       boolean bRet = false;

       System.out.println("Enter the Number :");
       iNo = sobj.nextInt();
       
       System.out.println("Enter Position first :");
       iPos1 = sobj.nextInt();

       System.out.println("Enter the Positon second :");
       iPos2 = sobj.nextInt();

       bRet = CheckBit(iNo, iPos1, iPos2);
        
        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

     }

}
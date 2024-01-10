
import java.util.*;

class Program235
{
     public static int  OffBit(int iNo)
     {
        int iMask = 0x00000400;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == iMask) //11th bit is ON
        {
            return (iNo ^ iMask);
        }
        else    //11th bit is OFF
        {
            return iNo;    
        }  

    }
     
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo =0;
        int iRet = 0;
       
        System.out.println("Enter nummber :");
        iNo = sobj.nextInt();
        
         iRet = OffBit(iNo);
         
         System.out.println("Updated number is :"+iRet);

    }   
 }   
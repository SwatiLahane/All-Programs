
import java.util.*;

class Program231

{
     public static boolean CheckBit(int iNo)
     {
        int iMask = 0X00004040;
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
     
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo =0;
        boolean bRet = false;
       
        System.out.println("Enter nummber :");
        iNo = sobj.nextInt();
        
         bRet = CheckBit(iNo);

         if(bRet == true)
        {
         System.out.println("7  & 15 bit is ON");
        }
        else
        {
            System.out.println("Bits are off"); 
        }

    }   
 }   
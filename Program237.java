
import java.util.*;

class Program237
{
     public static int ToggleBit(int iNo)
     {
        int iMask = 0x00000040;
        int iResult = 0;

        iResult = iNo & iMask;
    
        return iResult;
    
        
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
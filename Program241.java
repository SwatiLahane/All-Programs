//
import java.util.*;

class Program239
{
     public static int CheckBit(int iNo, int iPos)
     {
        int iMask = 0x00000001;
        int iResult = 0;
         
        iMask = iMask << (ipos - 1);
        iResult = iNo & iMask; //
    
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
        int iNo =0, ipos =0;;
        boolean bRet = false;
       
        System.out.println("Enter nummber :");
        iNo = sobj.nextInt();

        System.out.println("Enter the Position :");
        ipos = sobj.nextInt();
        
         bRet = CheckBitBit(iNo, ipos);
          

         if(bRet == true)
         {
             System.out.println("Bit is ON at the given position");
         }
         else
         {
            System.out.println("Bit is OFF at the given position");
         }
        

    }   
 }   
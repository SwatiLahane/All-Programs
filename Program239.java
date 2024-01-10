//
import java.util.*;

class Program239
{
     public static int ToggleBit(int iNo, int iPos)
     {
        int iMask = 0x00000001;
        int iResult = 0;
         
        iMask = iMask << (ipos - 1);
        iResult = iNo & iMask; //
    
        return iResult;
    
        
    }
     
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo =0, ipos =0;;
        int iRet = 0;
       
        System.out.println("Enter nummber :");
        iNo = sobj.nextInt();

        System.out.println("Enter the Position :");
        ipos = sobj.nextInt();
        
         iRet = ToggleBit(iNo, ipos);
         
         System.out.println("Updated number is :"+iRet);

    }   
 }   
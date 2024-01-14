

import java.util.*;

class Arithematic
{
    
          int CountDigit(String Str)

          {

            int iCnt = 0;
            char Arr[] = Str.toCharArray();
            int icount = 0;

          for(iCnt = 0; iCnt < Arr.length; iCnt++)
          {
             if(Arr[iCnt] >= '0' && Arr[iCnt] <= '9')
             {
                 icount++;
             } 
          }
          return icount;
      }
}


class Program11
{
    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();
        
        String str = null;
        int iRet = 0;
        
        System.out.println("Enter String :");
        str = sobj.nextLine();

        iRet = aobj.CountDigit(str);

        System.out.println("Frequecy of digits :"+iRet);

    }
}
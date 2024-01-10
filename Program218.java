

import java.util.*;

class Program218

{
  public static int CountCapital (String str)
  {
      int iCnt =0;
      int iCount = 0;
      char Arr[] = str.toCharArray();
      for(iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
         {
             iCount++;
         }

        }
        return iCount;
  }   

    public static void main(String Arg[])
    {
      Scanner sobj = new Scanner(System.in);
      
      String str = null;
      int iRet = 0;
      
      System.out.println("Enter String :");
      str = sobj.nextLine();
      
       iRet = CountCapital(str);

       System.out.println("Number of capital characters are :"+iRet);
      
      sobj.close();

    }
}
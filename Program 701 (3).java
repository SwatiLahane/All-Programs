
//To check 3rd bit is on or not 


import java.util.*;

class Program3
{
   public static void main(String arg[])
   {

    Scanner sobj = new Scanner(System.in);
    int iNo = 0;
    int iMask = 4;
    int iResult =0;
    
    
     System.out.println("Enter Number :");
     iNo = sobj.nextInt();

      iResult = iNo & iMask;

      if(iResult == iMask)
      {
          System.out.println("3rd bit is ON");
      }
      else
      {
        System.out.println("3rd bit is OFF");
      }

   }
}


import java.util.*;

class Program210
{
     
  public static void Display(int Brr[])

  {
      int iCnt =0;
      for(iCnt = 0; iCnt < Brr.length; iCnt++)
      {
          System.out.println(Brr[iCnt]+"\t");

      }
      System.out.println();
  }
  
public static void main(String Arg[])
{
  Scanner sobj = new Scanner(System.in);
 
   int iSize =0;
   int iCnt=0;

  System.out.println("Enter the number of elements:");
   iSize = sobj.nextInt();

   int Arr[] = new int[iSize];
   
   System.out.println("Elements of the array are: ");

   for(iCnt  =0; iCnt < iSize; iCnt++)
   {
       System.out.print(Arr[iCnt]);
   }
  

  
   Display(Arr);
  sobj.close();

}

}
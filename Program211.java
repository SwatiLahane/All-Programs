


import java.util.*;

class Program211
{
     
  public static int Addition(int Brr[])

  {
      int iCnt =0;
      int iSum = 0;
      for(iCnt = 0; iCnt < Brr.length; iCnt++)
      {
          iSum= iSum + Brr[iCnt];
    
      }
     return iSum;

  }
public static void main(String Arg[])
{
  Scanner sobj = new Scanner(System.in);
 
   int iSize =0;
   int iCnt=0;
   int iRet = 0;

  System.out.println("Enter the number of elements:");
   iSize = sobj.nextInt();

   int Arr[] = new int[iSize];
   
   System.out.println("Elements of the array are: ");

   for(iCnt  =0; iCnt < iSize; iCnt++)
   {
       Arr[iCnt] = sobj.nextInt();
   }
  

  
  iRet =Addition(Arr);

  System.out.println("Addition of all elements is :"+iRet);
  sobj.close();

}

}
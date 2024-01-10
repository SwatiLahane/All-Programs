


import java.util.*;




public class Program206
{
   public static void EvenOddFactors(int iNo)
   {    
       int icnt = 0;
       int iFact =1;

       int iSumEven =0;
       int iSumOdd=0;

       for(icnt= 1; icnt <= iNo; icnt++)
       {
           if((iNo % icnt) == 0)
           {
               if((iNo % 2 )== 0)
               {
                   iSumEven = iSumEven + icnt;
               }
              else
              {
                iSumOdd = iSumOdd + icnt;
              }
           }
       }

       System.out.println("Addition of Even Factors"+iSumEven);
       System.out.println("Addition of Odd Factors"+iSumOdd);
   
    } 
    public static void main(String Arg[])
    {
      Scanner sobj = new Scanner(System.in);
     
       int iValue = 0 , iAns =0;
       System.out.println("Enter Number :");
       iValue = sobj.nextInt();
       
        EvenOddFactors(iValue);

       System.out.println("Factorial is :"+iAns);

      sobj.close();

    }

}
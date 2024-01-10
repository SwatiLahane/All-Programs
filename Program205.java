


import java.util.*;




public class Program203 
{
   public static void EvenOddFactors(int iNo)
   {    
       int icnt = 0;
       int iFact =1;

       ]for(icnt= 1; icnt <= iNo; icnt++)
       {
           if((iNo % icnt) == 0)
           {
               if((iNo % 2 )== 0)
               {
                   System.out.println("Even factor is :" +icnt);
               }
              else
              {

              }
           }
       }
   } 
    public static void main(String Arg[])
    {
      Scanner sobj = new Scanner(System.in);
     
       int iValue = 0 , iAns =0;
       System.out.println("Enter Number :");
       iValue = sobj.nextInt();
       
       iAns = EvenOddFactors(iValue);

       System.out.println("Factorial is :"+iAns);

      sobj.close();

    }

}
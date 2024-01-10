

import java.util.*;




public class Program203 
{
   public static int Factorial(int iNo)
   {    
       int icnt = 0;
       int iFact =1;

       while(icnt <=iNo)
       {
        iFact = iFact * icnt ;
          icnt++;
       }
        return iFact;
   } 
    public static void main(String Arg[])
    {
      Scanner sobj = new Scanner(System.in);
     
       int iValue = 0 , iAns =0;
       System.out.println("Enter Number :");
       iValue = sobj.nextInt();
       
       iAns = Factorial(iValue);

       System.out.println("Factorial is :"+iAns);

      sobj.close();

    }

}
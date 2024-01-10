



import java.util.*;

import javax.swing.Icon;


 class Program207
{
   public static void Display(int iNo)
   {    
        int icnt =0;
    for(icnt = 1; icnt<=iNo; icnt++)
    {
      System.out.println(icnt+"\t "+"*\t"); 
    }
        System.out.println();
    } 
    public static void main(String Arg[])
    {
      Scanner sobj = new Scanner(System.in);
     
       int iValue = 0 , iAns =0;
       System.out.println("Enter Number :");
       iValue = sobj.nextInt();
       
        Display(iValue);

      

      sobj.close();

    }

}
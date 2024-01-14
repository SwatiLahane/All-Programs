

//Display Exam time using switch case

import java.util.*;

class Arithematic
{
   
    public void DisplayExamTime(int iStandard )
    {
       
        switch(iStandard)
        {
            case 1: 
            System.out.println("Your Exam is at 9 am");
            break;

            case 2:
            System.out.println("Your Exam is at 10 am");
            break;

            case 3:
            System.out.println("Your Exam is at 11 am");
            break;


            case 4:
            System.out.println("Your Exam is at 12 Noon");
            break;

            case 5:
            System.out.println("Your Exam is at 1 pm");
            break;

            case 6:
            System.out.println("Your Exam is at 2 pm");
            break;

            default : 
            System.out.println("Invalid Input ");

        }
    }
}


class Program24
{
    public static void main(String Args[])
    {
      
      Scanner sobj = new Scanner(System.in);
      Arithematic aobj = new Arithematic();
      int iValue = 0;

      System.out.println("Enter Your Standard :");
      iValue = sobj.nextInt();

      aobj.DisplayExamTime(iValue);
      
    }
}

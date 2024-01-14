

//Display Percentage

import java.util.*;

class Arithematic
{
     
    public void Percentage(int iMarks)
    {
        if((iMarks >= 0) && (iMarks < 35))
        {
            System.out.println("You are Fail");
        }
        else if((iMarks >= 35) && (iMarks < 50))
        {
            System.out.println("Pass Class");
        }
        else if((iMarks >= 50) && (iMarks < 60))
        {
            System.out.println("Second Class");
        }
        else if((iMarks >= 60) && (iMarks < 75))
        {
            System.out.println("First Class");
        }
       else if((iMarks >= 75) && (iMarks < 100))
       {
           System.out.println("First class wih distinction");
       }

     }

}


class Program21
{

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();

        System.out.println("Enter your marks :");
        int iValue = sobj.nextInt();
        
        aobj.Percentage(iValue);
        

    }
}






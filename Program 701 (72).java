
import java.util.*;
//Enter your marks and check class

class Arithmetic 
{

    public void DisplayClass(int iMarks)
    {   
        if((iMarks < 0.0f ) || (iMarks > 100.0))
        {
            System.out.println("Invalid input ");
        }
        if((iMarks >= 0.0f) && (iMarks < 35.0f))
        {
            System.out.println("Your class is fail");
        } 
        else if((iMarks >= 35.0f) && (iMarks < 50.0f))
        {
            System.out.println("pass class");
        }
        else if((iMarks >= 50.0f) && (iMarks < 60.0f))
        {
            System.out.println("class second ");
        }
        else if((iMarks >= 60.0f) && (iMarks < 75.0f))
        {
            System.out.println("class first");
        }
        else if((iMarks >= 75.0f) && (iMarks < 100.0f))
        {
            System.out.println("first class with Distinction");
        }
    }
}


class Program22
{
    

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithmetic aobj = new Arithmetic();
        
        System.out.println("Enter your marks :");
        int iValue = sobj.nextInt();
       
        aobj.Percentage(iValue);
        
        
    }
}
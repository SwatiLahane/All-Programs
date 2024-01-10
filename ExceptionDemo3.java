import java.util.*;

class Demo
{
  public void Division() throws ArithmeticException 
  {
       Scanner sobj = new Scanner(System.in);
       System.out.println("Enter First Number: ");
       int iNo1 = sobj.nextInt();
       
       System.out.println("Enter Second Number: ");
       int iNo2 = sobj.nextInt();
        
       int iAns = 0; 
       iAns = iNo1 / iNo2;
        System.out.println("Division is : "+iAns);

  }

}

class ExceptionDemo3
{

    public static void main(String arg[])
    {
       Demo dobj = new Demo();
       try
       {
              dobj.Division();
       }
      
      catch(ArithmeticException obj)
      {
          System.out.println("Inside Catch");
      }
      finally 
      {
          System.out.println("Inside Finally");

      }

    } 

}
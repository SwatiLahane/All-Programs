
//

import java.util.*;
class Arithematic
{
    void DisplayExamTime(int iStandard)
    {
      if(iStandard == 1)
      {
        System.out.println("Your exam is at 9am");
      }
      else if(iStandard == 2)
      {
        System.out.println("Your exam is at 10am");
      }

     else if(iStandard == 3)
      {
        System.out.println("Your exam is at 11am");
      }

     else if(iStandard == 4)
      {
        System.out.println("Your exam is at 12 noon");
      }
      
      else
      {
          System.out.println("Invalid input");
      }
    } 

}



class Program23
{
    public static void main(String aRGS[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();
        int iValue = 0;
        System.out.println("Enter Your Standard :");
        iValue = sobj.nextInt();
        

        aobj.DisplayExamTime(iValue);

    }
}
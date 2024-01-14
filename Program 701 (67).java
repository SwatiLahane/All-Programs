
//Calculate percentage

import java.util.*;





class Program17
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        
        System.out.println("Enter The Marks :");
        int iMarks = sobj.nextInt();

        System.out.println("Enter Total Marks:");
        int iTotal = sobj.nextInt();

    

        if((iMarks < 0 ) || (iTotal < 0) || (iMarks > iTotal) )//updator
        {
           System.out.println("Invalid input "); 
          
        }

        float fret = (((float)iMarks / (float)iTotal) * 100);

        System.out.println("Percentage is :"+fret);

    }
}
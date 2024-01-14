
//Calculate average of  numbers 
import java.util.*;

class Arithematic
{
    
    public int Average(int iNo1, int iNo2, int iNo3)
    {
        float fAvg  = 0.0f;

        fAvg = ((float)iNo1 + (float) iNo2 + (float) iNo3 / (3.0));
        
        return fAvg;
    }

}


class Program28
{
    public static void main(String Args[])

    {
       Scanner sobj = new Scanner(System.in);
       Arithematic aobj = new Arithematic();

       int iValu1 =0, iValu2 = 0, iValu3 = 0;

       System.out.println("Enter three Numbers :");
       iValu1 = sobj.nextInt();
       iValu2 = sobj.nextInt();
       iValu3 = sobj.nextInt();

       float fRet =aobj.Average(iValu1, iValu2, iValu3);
       
       System.out.println("Average of Number are :"+fRet);

    }
}


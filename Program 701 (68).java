
//Option 2
import java.util.*; 

class Arithematic
{
    public float CalPercentage(int iMarks , int iToatal)
    {
        float fAns = 0.0f;
          
        if((iMarks < 0 ) || (iToatal < 0) || (iMarks > iToatal))
        {
            System.out.println("Invalide Input ");

        }
        fAns = (((float)iMarks / (float) iToatal) * 100);

        return fAns;

    }
}

class Program18
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();

        System.out.println("Enter Number of obtained marks :");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Total Number of Marks :");
        int iValue2  = sobj.nextInt();

        float fRet = aobj.CalPercentage(iValue1,iValue2);//Function call

        System.out.println("Percentage is :"+fRet);


    }
}
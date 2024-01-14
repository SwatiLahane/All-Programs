
//Option 2
import java.util.*; 


class Arithematic
{   

    
    public int iMarks;
    public int iToatal;

    public Arithematic(int A, int B)
    {
        this.iMarks = A;
        this.iToatal = B;
    }
    
    public float CalPercentage()
    {
        float fAns = 0.0f;
          
        if((iMarks < 0 ) || (iToatal < 0) || (iMarks > iToatal))
        {
            System.out.println("Invalid Input ");

        }
        fAns = (((float)iMarks / (float) iToatal) * 100);

        return fAns;

    }
}

class Program20
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        

        System.out.println("Enter Number of obtained marks :");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Total Number of Marks :");
        int iValue2  = sobj.nextInt();
        
        Arithematic aobj = new Arithematic(iValue1,iValue2);
        float fRet = aobj.CalPercentage();//Function call

        System.out.println("Percentage is :"+fRet);


    }
}
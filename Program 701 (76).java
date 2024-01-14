
//Option 2
import java.util.*;
class Arithematic
{
    public int iNo1;
    public int iNo2;

    public Arithematic(int A, int B)
    {
        this.iNo1 = A;
        this.iNo2 = B;
    }

    public int Max()
    {
        if(iNo1 >= iNo1)
        {
            return iNo1;
        }
        else
        {
            return iNo2;
        }
    }
}


class Program26
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number :");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Second Number :");
        int iValue2 = sobj.nextInt();
        
        Arithematic aobj = new Arithematic(iValue1, iValue2);
        int iRet = aobj.Max();

        System.out.println("Largest Number Is :"+iRet);

    }
}
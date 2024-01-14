


//Option 2
import java.util.*; 
import Marvellous2.Arithematic2;


class Program18
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

// 1 : javac -d . Arithematic.java
// 2 : javac Program8.java
// 3 : java Program8
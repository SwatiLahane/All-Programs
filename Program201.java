
import Marvellous.Arithematic; //importing arithematic class from marvellous package
import java.util.*; 


public class Program201 
{
    
    public static void main(String Arg[])
    {
      Scanner sobj = new Scanner(System.in);
     

      int iNo1 = 0, iNo2 = 0;
      int iAns = 0;

      System.out.println("Enter First Number:");
      iNo1 = sobj.nextInt();

      System.out.println("Enter First Number:");
      iNo2 = sobj.nextInt();
    
      Arithematic aobj = new Arithematic(iNo1, iNo2);
      iAns = aobj.Addition();
      System.out.println("Addition is :"+iAns);

    }

}

// 1 : javac -d . Arithematic.java //-d means directory tayar kara . tithech curent directory
// 2 : javac Program8.java
// 3 : java Program8
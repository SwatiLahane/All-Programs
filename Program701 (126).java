
//count space 
import java.util.*;

class Arithematic 
{
    int CountSpace(String Str)
    {
        int iCount = 0;
        int icnt =0;
        char Arr[] = Str.toCharArray();

        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            if(Arr[icnt] == ' ')
            {
                iCount++;
            }
        }
         return iCount;
    }

}


class Program15
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();

        String str = null;
        int iRet = 0;

        System.out.println("Enter Stirng :");
        str = sobj.nextLine();

        iRet = aobj.CountSpace(str);
        System.out.println("Frequency of space is :"+iRet);

    }
}







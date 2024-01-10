
//Programs on bitwise 
import java.util.*;

class Program219
{

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo =0;
        int iDigit =0;
        
        System.out.println("Enter nummber :");
        iNo = sobj.nextInt();

        while(iNo != 0)
        {

            iDigit = iNo %2;
            iNo = iNo / 2;

            System.out.print(iDigit);

        }
        System.out.println();
        sobj.close();
    }
}

/*

Input            1   1   0   1   0   0   0   1
Mask             0   0   0   0   0   1   0   0      &
------------------------------------------------------
Result           0   0   0   0   0   0   0   0





Input            1   0   0   0   1   1   1   1 
Mask             0   0   0   0   0   1   0   0      &
------------------------------------------------------
Result           0   0   0   0   0   1   0   0


*/
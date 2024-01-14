
//Case sensitive

import java.util.*;


class Arithematic 
{
    int CountVowels(String Str)
    {
        int icnt = 0;
        int iCount = 0;
        char Arr[] = Str.toCharArray();

        for(icnt = 0; icnt < Arr.length ; icnt++)
        {
            if(Arr[icnt] == 'A' || Arr[icnt] == 'E' || Arr[icnt] == 'I' || Arr[icnt] == 'O' || Arr[icnt] == 'U')
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program13
{
    public static void main(String abc[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();

        String str = null;
        int iRet = 0;

        System.out.println("Enter String :");
        str = sobj.nextLine();
        
        iRet = aobj.CountVowels(str);
        System.out.println("Count capital  Vowels in string :"+iRet);

    }



}





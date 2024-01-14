
//replace space with letter
//not Getting result

import java.util.*;

class Arithematic 
{
 
    void Replace(String Str)
    
    {

      int icnt = 0;
      char Arr[] = Str.toCharArray();

    for(icnt = 0; icnt < Arr.length; icnt++)
    {
        if(Arr[icnt] == 'a')
        {
            Arr[icnt] = '-';
        }
    }

  }

}


class Program16
{
    
    public static void main(String args[])
    {

        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();
        String str = null;
        int iRet = 0;
        System.out.println("Enter String :");
        str = sobj.nextLine();
        
        aobj.Replace(str);
        System.out.println("Updated string is :"+str);
        
    }



}
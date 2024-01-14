
//Conver Upper case 
import java.util.*;

class Arithematic 
{
     void strUprX(String Str)
     {
          int icnt =0;
          char Arr[] = Str.toCharArray();
          
          for(icnt = 0; icnt < Arr.length; icnt++)
          {
             if(Arr[icnt] >= 'a' && Arr[icnt] <= 'z')
             {
                
             }
          
          }
          
        
     }

}

class Program17
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();
        String str  = null;

        System.out.println("Enter String :");
        str = sobj.nextLine();

        aobj.strUprX(str);

    }
}

import java.util.*;


class Arithematic 
{
      
    int CountSmall(String Str)
    {
        int icnt = 0 ;
        int iCount = 0;
        char Arr[] = Str.toCharArray();

        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            if(Arr[icnt] >= 'a' && Arr[icnt] <= 'z')
            {
                iCount++;
            }
        }
          return iCount;
    }


}


class Program10
{
   public static void main(String Args[])
   {

      Scanner sobj = new Scanner(System.in);
      Arithematic aobj = new Arithematic();
      
      String str = null;

      System.out.println("Enter String :");
      str = sobj.nextLine();
    
     int iRet = aobj.CountSmall(str); 
     
     System.out.println("Count of small are :"+iRet);

   }





}
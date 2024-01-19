
//3. Write a Program which accept one number and position from user and ON that bit ,Return Modified Number 

//Input : 10 3
//Output  14

import java.util.*;

  
class Arithematic
{
     public int iValue;
     public int ipos;

     
     public Arithematic(int A, int B)
     {
         this.iValue = A;
         this.ipos = B;
     }

    public int ONBit()
    {
        int iResult =0;
        int iMask = 0X00000001; 
         
        iMask = iMask << (ipos -1);

        iResult = iMask ^ iValue;
        
        return iResult; 
       
    }
}


class Program3
{

   public static void main(String Args[])
   {
       Scanner sobj = new Scanner(System.in);

       int iNo =0;
       int iPos =0;
       int iRet = 0;

       System.out.println("Enter the Number :");
       iNo = sobj.nextInt();
        
       System.out.println("Enter the Position :");
       iPos = sobj.nextInt();

       Arithematic aobj = new Arithematic(iNo, iPos); //Constructor call
       
       iRet = aobj.ONBit(); //Function call
       
       System.out.println("Updated Numeber:"+iRet);

  
    }

}
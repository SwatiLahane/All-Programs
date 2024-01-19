
//Write a Program which accept one number and posiiton from user and check wheather bit at that position is ON or OFF 
//If bit is ON Return true otherwise return false 

//Input : 10   2
//Output : TRUE

import java.util.*;

class Arithematic 
{
    public int iValue;
    public int ipos;

    public Arithematic(int A , int B)
    {
        this.iValue = A;
        this.ipos   = B;
    }
   
    public boolean CheckBit()
    {   
        int iMask = 0X00000001;
        int iResult = 0;
        
        iMask = iMask << (ipos -1);
         
        iResult = iValue & iMask; 
        
        if(iResult == iMask)
        {
           return true;  
        }
       else
       {
           return false;
       }

    } 
  
} 

class Program1
{
      
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iPos = 0;
        boolean bRet = false;

        System.out.println("Enter the Number :");
        iNo = sobj.nextInt();

        System.out.println("Enter the Position:");
        iPos = sobj.nextInt();
         
        Arithematic aobj = new Arithematic(iNo ,iPos) ;
        bRet = aobj.CheckBit();
        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }  
       
    }
}


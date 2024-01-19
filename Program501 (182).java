

//2.Write a programwhich accept one number position from user and OFF that bit .Return Modified Number 
//Input : 10   2
//Output : 8

import java.util.*;

class Arithematic
{
    public int iValue;
    public int ipos;

    public Arithematic(int A , int B)
    {
        this.iValue = A;
        this.ipos = B;

    }

    public int OffBit()
    {
        int iMask = 0X00000001;
        int iResult = 0;
        
        iMask = iMask << (ipos -1);
        
        iResult =  iValue & iMask;

        if(iResult == iMask)
        {
            return (iValue ^ iMask);
        }
        
        else
        {
            return iValue;
        }

    }
} 

class Program2
{
    public static void main(String Arg[])
    {

        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0;
        int iPos = 0;
        int iRet = 0;
        
        System.out.println("Enter Number :");
        iNo = sobj.nextInt();

        System.out.println("Enter Position:");
        iPos = sobj.nextInt();
        
        Arithematic aobj = new Arithematic(iNo ,iPos);
        iRet = aobj.OffBit();
        
        System.out.println("Updated Number is :"+iRet);



    }
}
 
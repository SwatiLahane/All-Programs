
//5. write a program which accept one number from user and toggle contents of first and last nible of the number .return modified number
//(Nible is a group of four bits)
//Input : 10 3
//Output  14


import java.util.*;

class Arithematic 
{

     public int iValue;
    
     //Rewrite logic 

     public Arithematic(int A)
     {
         
        this.iValue = A;
        
     }
     public int ToggleBit()
     {   

         int iMask = 0X80000009;
         int iResult = 0;
         
         iResult = iMask ^ iValue;
         
         return iResult ;

     }

}

class Program5
{

   public static void main(String Args[]) throws Exception
   {
       Scanner sobj = new Scanner(System.in);

       int iNo =0;
       int iRet = 0;
       
    
                 
       System.out.println("Enter the Number :");
       iNo = sobj.nextInt();
        

       Arithematic aobj = new Arithematic(iNo); //Constructor call
       
       iRet = aobj.ToggleBit(); //Function call
       
       System.out.println("Updated Numeber:"+iRet);
       
      

      

     
    }

}
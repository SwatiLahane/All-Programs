 
 //Write a program which accept N numbers from user and accept one another number as NO ,return  index of first Occurance of that number 

  //Input : 6
 //No : 66

 //Elements : 85 66 3 66 93 88
 //Output : 1

 //Input : 6
 //No : 12

 //Elements : 85 11 3 15 11 111
 //Output : -1

  import java.util.*;




 class Program2
 {  
   
    public static int FirstOcc(int Arr[] , int iNo)
    {
         int iCnt;
         int ipos = 1;
       for(iCnt = 0; iCnt < Arr.length; iCnt++)
       {
          if(Arr[iCnt] == iNo)
          {  
              
            return iCnt;
              
          }
          
       }
        return -1;
    } 

    ///////////////////////////////////////////////////////////////////////////////////////////
    //
    // Entry point function from where execution get starts
    //
    ////////////////////////////////////////////////////////////////////////////////////////////

    public static void main(String Args[])
    {

      Scanner sobj = new Scanner(System.in); //
      int iSize =0 ,iValue = 0; //loacal variable
      int iCnt = 0 ,iRet =0 ; //loacal variable

      System.out.println("Enter number of elements :\n");
      iSize = sobj.nextInt();
      
      int Brr[] = new int[iSize];  //Memory allocation for iSize eleemnets 

      System.out.println("Enter Number :");
      iValue = sobj.nextInt();
    
      System.out.println("Enter Elements :");
      for(iCnt = 0; iCnt < iSize; iCnt++)
      {
          Brr[iCnt] = sobj.nextInt();  
      } 
        
      iRet = FirstOcc(Brr , iValue); //Function call
      System.out.println(" : "+iRet);

    }
 }
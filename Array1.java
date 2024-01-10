




class Array1
{
  public static void main(String Arg[])
 { 
    //1
    int Arr1[] = {11,21,51,10};

   //2
   int Arr2[] = new int[4];
   Arr2[0] = 11;
   Arr2[1] = 21;
   Arr2[2] = 51;
   Arr2[3] = 10;

   System.out.println("Length of Array is : "+Arr1.length);
    
    int icnt = 0;

   for(icnt = 0; icnt < Arr1.length; icnt++)
   {
       System.out.println(Arr1[icnt]);
   }
   
}

}
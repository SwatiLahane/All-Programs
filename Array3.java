

class Array3
{
    public static void main(String Arg[])

    {

       int Arr[][] = {{10,20,30},{40,50},{60,70,80},{90,100,101,120,130},{140}};   


           int i = 0;
           int j = 0;

        for(i = 0; i < Arr.length; i++)  //Outer Loop
       {
             //  1           2            3
           for(j = 0; j < Arr[i].length; j++) //inner loop
           {
               System.out.print(Arr[i][j]+"\t"); //4
           }
           System.out.println();
       }
       
    }
    }
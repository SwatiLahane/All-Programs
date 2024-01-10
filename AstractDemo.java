
abstract class Demo 
{

    public int A;
    public int B;

    public Demo()
    {
        System.out.println("Inside Demo constructor\n");
        this.A = 0;
        this.B = 0;
    }
    
    //in c++
 //virtual void fun() = 0;
    abstract void fun(); 
 

    void gun()
    {
        System.out.println("Inside gun of Demo");
    }
}
class Hello extends Demo
{
    public Hello()
    {
        System.out.println("Inside Hello Constructor\n");
    }

   public void fun()
   {
       System.out.println("Inside fun of Hello");
   }
}

class AstractDemo
{

 public static void main(String args[])
 {
     // Demo obj = new Demo();
     Hello hobj = new Hello();
     hobj.fun();
     hobj.gun();
 }



}
//Data Structure in java
//Singly Linear list
class node    //struct node in c ,c++
{
   public int data;
   public node next; //struct node *next in c++ 

   public node(int no)
   {
       data = no;
       next = null;
   }
}

class SinglyLL
{
    private node first;
    private int Count;

    public SinglyLL()
    {
        first = null;
        Count = 0;
    }

    public void InsertFirst(int no){}
    public void InsertLast(int no){}
    public void InsertAtPos(int no, int ipos){}
    public void DeleteFirst(){}
    public void InsertLast(){}
    public void DeleteAtPos(int ipos){}
    public void Display(){}
    public int Count(){ return Count; }

}


class Program368
{
    public static void main(String arg[])
    {
        
      SinglyLL obj = new SinglyLL(); //object

      obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);

      obj.Display();

    }
}
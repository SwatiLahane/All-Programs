
class Employee
{
    public String Name;
    public int Salary;
    public int Age ;
    public String Address;
 
 Employee(String str, int amount,int A, String addr)
 {
    this.Name = str;
    this.Salary = amount;
    this.Age = A;
    this.Address = addr;
 }

 protected void finalize()
 {
     System.out.println("Inside finalise method");
 }
 void Display()

{  
   System.out.println("Employee Name : "+this.Name);
   System.out.println("Employee Salary : "+this.Salary);
   System.out.println("Employee Age : "+this.Age);
   System.out.println("Employee Address : "+this.Address);
}

public Object clone() throws CloneNotSupportedException
  { 
      return super.clone();
  }

}

class FinalizeDemo4
{
    public static void main(String Arg[])
    {
        Employee eobj1 = new Employee("Amit",78000,29,"Karve road pune");
        Employee eobj2 =(Employee)eobj1.clone();
        eobj1.Display();
        eobj2.Display();

  } 
}
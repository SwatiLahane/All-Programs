


#include<iostream>
using namespace std;

class Demo
{
   public:
      int i;
      int j;
      static int k;

      Demo(int a = 10, int b = 20)
      {
         i = a;
         j = b;
      }

    void Display()
    {
        cout<<"Inside non static method display\n";
        cout<<"Value of i" <<i<<"\n";
        cout<<"Value of j" <<j<<"\n";
        cout<<"Value of k"<<k<<"\n";
     }

   static void Fun()
   {
        cout<<"Inside static method Fun\n";
        cout<<"Value of k"<<k<<"\n";
   }
 
};

int Demo :: k = 111; //static variable initialization should 
//be outside


int main()
{
cout<<" Value of K is :" <<Demo::k<<"\n";
  Demo :: Fun();
  Demo obj1(11,21);
  Demo obj2(51,101);
  Demo obj3(121,151);

  cout<<"Size of object is : "<<sizeof(obj1)<<"\n";


  obj1.Display();
  obj2.Display();
  obj3.Display();

  //obj1.Fun(); compiler internaly converts into class

    return 0;

}
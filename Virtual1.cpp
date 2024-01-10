#include<iostream>
using namespace std;


class Base 
{
         
         int i,j,k;

         void Fun ()
         {
             cout<<"Inside Base fun\n";
         }
};

class Derived : public Base
{
   public :
   int a,b;

   void Gun()
   {
        cout<<"Inside derived gun\n";
   }

};

int main()
{

   Base bobj;
   Derived dobj;

    cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(dobj)<<"\n";
    bobj.Fun(); //Base call

    dobj.Fun(); //Deriverd class
    dobj.Gun(); //Deriverd 

    return 0;
}
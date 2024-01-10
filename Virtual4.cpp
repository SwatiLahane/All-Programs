#include<iostream>
using namespace std;


class Base 
{
         public :
         int i,j,k;

         virtual void Fun () //1000
         
         {
             cout<<"Inside Base fun\n";
         }

       virtual void Gun() //2000
         {cout<<"Inside Base fun\n";}
          

         void Sun() //3000 
         {
             cout<<"Inside Base Sun\n";
         }
         void Run() //4000
         {
             cout<<"Inside Base Run\n";
         }
};

class Derived : public Base
{
   public :
   int a,b;

  virtual void Gun() //5000
   {
        cout<<"Inside derived gun\n";
   }

    void Run() //6000
   {
        cout<<"Inside derived Run\n";
   }
  virtual void Mun() //7000
   {
        cout<<"Inside derived Mu\n";
   }

};

int main()
{  
    cout<<sizeof(Base)<<"\n";     //12 after writing virtual keyword size get changed by 4 byte it varies from complier engvironment //16
    cout<<sizeof(Derived)<<"\n"; //20  after writing virtual keyword size get changed by 4 byte it varies from complier engvironment //24

   Base *bp = new Derived;
   bp->Fun();  //Base Fun 
   bp->Gun();  //derived Gun
   bp->Sun(); //Base Sun
   bp->Run(); //Base Run
   
   //bp -> Mun() //Error
    

    return 0;
}
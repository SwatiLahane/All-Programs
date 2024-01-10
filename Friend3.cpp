
#include<iostream>
using namespace std;

class Hello
{
  
    public :
    void Display(); //Declaration

  
};


class Demo 
{
    public :
    int i;

    private :
    int j;

    protected :
    int k;
    public:

    Demo ()
    {
        i = 10;
        j = 20;
        k = 30;

    }
     
     friend void Hello :: Display(); //Hello name chya class chya 
     //aat madhe display navach function ahe

};

  void Hello :: Display() //Defination

{
    
     Demo obj;
     cout <<"Value of i : "<<obj.i<<"\n";
     cout <<"Value of j : "<<obj.j<<"\n";
     cout <<"Value of1 k : "<<obj.k<<"\n";

}

int main()
{
    Hello hobj;

    hobj.Display();
   
    return 0;
}
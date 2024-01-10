
#include<iostream>
using namespace std;

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
     
};

void Display()
{
    
     Demo obj;
     cout <<"Value o i : "<<obj.i<<"\n";
     cout <<"Value o j : "<<obj.j<<"\n";
     cout <<"Value o k : "<<obj.k<<"\n";

}

int main()
{


    return 0;
}
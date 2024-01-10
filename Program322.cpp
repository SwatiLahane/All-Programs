
#include<iostream>
using namespace std;

//call by refferece & operator
void Swap(float &No1, float &No2)
{

    float Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;

}

int main()

{
 
   float iValue1 = 10.8;
   float iValue2 = 20.5;

   cout<<"Value of iValue1 : "<<iValue1<<"\n";
   cout<<"Value of iValue2 : "<<iValue2<<"\n";
  
   Swap(iValue1 , iValue2);

   cout<<"Value of iValue1 : "<<iValue1<<"\n";
   cout<<"Value of iValue2 : "<<iValue2<<"\n";

 return 0;
}
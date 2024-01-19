
#include<iostream>
using namespace std;

int main()
{
    int iCnt =0;
    cout<<"-----------------------------------------------------------\n";
    cout<<"-------------------ASCII------------------------------------\n";

    cout<<"------------------------------------------------------------\n";
    
    for(iCnt=0; iCnt <= 127; iCnt++)
    {
        
      cout << char(iCnt)<<"\t"<< int(iCnt)<<"\t"<<endl  ; 
    }
    

    return 0;
}
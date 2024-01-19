

//check Capital letter 

#include<iostream>
using namespace std;

bool checkCapital(char ch1)
{
    if((ch1 >= 'A' ) && (ch1 <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    
    char ch = '\0';
    bool bRet = false;

    cout<<"Enter Character:\n";
    cin>>ch;
    
    bRet = checkCapital(ch);//function call

    if(bRet == true)
    {
      cout<<"It is a Capital Letter";
    }
    else
    {
        cout<<"It is not a Capital letter";
    }

    return 0;
}
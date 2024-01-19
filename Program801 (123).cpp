


    //Case Non Sensetive

    #include<iostream>
    using namespace std;

    int CountVowels(char str[])
    {
        int icnt =0;

        while(*str != '\0')
        {
            
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' )

             {

               icnt++;

             }   
          str++; 
        }
        return icnt;
    } 

    int main()
    {
    
    char Arr[20];
    int iRet = 0;
    cout<<"Enter the String :";
    gets(Arr);

     iRet = CountVowels(Arr);
     cout<<"Frequency of vowels is:"<<iRet;

        return 0;
    }
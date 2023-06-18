#include<iostream>
using namespace std;

void DisplayHexadecimal(int iNo)
{
    int iDigit  = 0;
    cout<<"HexaDecimal conversion is "<<iNo<<"\n"; 

    while(iNo != 0)
    {
        iDigit = iNo%16;
        if(iDigit <=9)
        {
            cout<<iDigit;
        }
        else
        {
            switch(iDigit)
            {
                case 10 :
                    cout<<"A";
                    break;
                case 11 :
                    cout<<"B";
                    break;
                case 12 :
                    cout<<"C";
                    break;
                case 13 :
                    cout<<"D";
                    break;
                case 14 :
                    cout<<"E";
                    break;
                case 15 :
                    cout<<"F";
                    break;
            }
        }
      
        iNo = iNo/16;

    }
    cout<<"\n";

}

int main()
{
    int iValue1 =0;
    int iValue2 =0;

    cout<<"Enter first number "<<"\n";
    cin>>iValue1;


    DisplayHexadecimal(iValue1);


    return 0;
}
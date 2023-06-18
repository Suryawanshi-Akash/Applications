#include<iostream>
using namespace std;

void DisplayHexadecimal(int iNo)
{
    int iDigit  = 0;
    cout<<"HexaDecimal conversion is "<<iNo<<"\n"; 

    while(iNo != 0)
    {
        iDigit = iNo%16;
        cout<<iDigit;
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
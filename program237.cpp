#include<iostream>
using namespace std;

void ChkBin(int iValue)
{
    int iDigit  = 0;

    while(iValue != 0)
    {
        iDigit = iValue%2;
        cout<<iDigit;
        iValue = iValue/2;
    }
}

int main()
{
    int iNo = 0;

    cout<<"Enter the number"<< "\n";
    cin>>iNo;

    ChkBin(iNo);

}
#include<iostream>
using namespace std;

typedef unsigned int UINT;

int OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos-1);
    
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return (iNo ^ iMask);
    }
    else
    {
        return iNo;
    }

}


int main()
{
    UINT iValue1 =0; 
    UINT iBit = 0;   
    UINT iRet = false;

    cout<<"Enter first number "<<"\n";
    cin>>iValue1;

    cout<<"Enter Bit number "<<"\n";
    cin>>iBit;

    iRet = OffBit(iValue1,iBit);

    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}
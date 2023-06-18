#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask= 0X00000001;
    UINT iResult = 0;

    if(iPos < 1 || iPos > 32)
    {
        cout<<"Invalid Position";
        return false;
    }
    iMask = iMask << (iPos-1);

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    UINT iValue1 =0;
    UINT iBit = 0;
    bool bRet = false;

    cout<<"Enter first number "<<"\n";
    cin>>iValue1;

    cout<<"Enter the bit position (Range should be between 1-32) "<<"\n";
    cin>>iBit;


    bRet = CheckBit(iValue1,iBit);

    if(bRet == true)
    {
        cout<<"bit is ON"<<"\n";
    }
    else
    {
        cout<<" bit is OFF"<<"\n";
    }


    return 0;
}
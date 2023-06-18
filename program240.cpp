#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos1,UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iResult = 0;

    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {
        cout<<"Invalid Position";
        return false;
    }

    iMask1 = iMask1 << (iPos1-1);
    iMask2 = iMask2 << (iPos2-1);

    // iMask = iMask1 | iMask2;        Without Clubbing

    iResult = iNo & (iMask1 | iMask2);

    if(iResult == (iMask1 | iMask2))
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
    UINT iBit1 = 0, iBit2 = 0;
    
    bool bRet = false;

    cout<<"Enter first number "<<"\n";
    cin>>iValue1;

    cout<<"Enter the bit position (Range should be between 1-32) "<<"\n";
    cin>>iBit1;

    cout<<"Enter the bit position (Range should be between 1-32) "<<"\n";
    cin>>iBit2;


    bRet = CheckBit(iValue1,iBit1,iBit2);

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
#include<iostream>
using namespace std;

typedef unsigned int UINT;

// 1111    1111    1111    1111    1111     1111    1011    1111
// F         F      F       F       F       F         B       F
int OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0XFFFFFFBF;
    UINT iResult = 0;
    
    iResult = iNo & iMask;
    return iResult;

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
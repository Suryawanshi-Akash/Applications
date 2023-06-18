#include<iostream>
using namespace std;

typedef unsigned int UINT;

int ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000040;

    return (iNo ^ iMask);

}


int main()
{
    UINT iValue1 =0;    
    UINT iRet = false;

    cout<<"Enter first number "<<"\n";
    cin>>iValue1;

    iRet = ToggleBit(iValue1);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}
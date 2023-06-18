#include<iostream>
using namespace std;

bool ChkBit(int iNo)
{
    int iResult = 0;
    int iMask = 0X00004000;

    iResult = iMask & iNo;

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
    int iNo = 0;
    bool bRet = false;


    cout<<"Enter the number"<< "\n";
    cin>>iNo;

    bRet =ChkBit(iNo);

    if(bRet == true)
    {
        cout<<"15th bit is ON";
    }
    else
    {
        cout<<"15th bit is OFF";
    } 

}
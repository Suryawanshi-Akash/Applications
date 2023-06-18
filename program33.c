#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iResult = 1;
    iCnt = 1;
    while(iCnt<=iNo)
    {
        iResult = iResult * iCnt;
        iCnt++;
    }

    // for(iCnt = 1; iCnt<=iNo; iCnt++)
    // {
    //     iResult = iResult * iCnt;
    // }
    return iResult;

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Result is : %d \n", iRet);

    return 0;

}
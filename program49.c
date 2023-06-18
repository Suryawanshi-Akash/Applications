#include<stdio.h>

int ReverseNumber(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10)+iDigit;
        
        iNo = iNo / 10;
    }
    return iRev;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number \n");
    scanf("%d", &iValue);

    iRet = ReverseNumber(iValue);

    printf("The reverse number is : %d", iRet);


    return 0;
}
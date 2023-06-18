#include<stdio.h>
#include<stdbool.h>


int CheckDigit(int iNo )
{
    int iDigit = 0;
    int iCount = 0;

    // if((iSearch<0) || (iSearch > 9))
    // {
    //     printf("please enter the Number between 0 to 9");

    //     return false;
    // }

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2)==0)
        {
            iCount++;
        }
        iNo = iNo / 10;

    }
    return iCount;

}

int main()
{

    int iValue1 = 0;
    // int iValue2 = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue1);


    // printf("Enter the Digit (0 to 9) : \n");
    // scanf("%d", &iValue2);

    iRet = CheckDigit(iValue1);

    printf("The Frequency is %d ", iRet);

  

    return 0;
}
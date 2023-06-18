#include<stdio.h>

void DisplayB(int iNo)
{
    int iCnt = 0;

    iCnt = iNo;

    while(iCnt>=1)
    {
        printf("%d \t",iCnt);
        iCnt--;
    }



    // for(iCnt = iNo; iCnt>=1; iCnt--)
    // {
    //     printf("%d \t",iCnt);
    // }

}


int main()
{
    int iValue = 0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    DisplayB(iValue);

    return 0;

}
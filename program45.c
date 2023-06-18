#include<stdio.h>
#include<stdbool.h>


int CheckNumber(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
       
        if(iDigit == 8)
        {
            iCount++;
        }
        iNo = iNo/10;

    }
    return iCount;
    
}



int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    iRet = CheckNumber(iValue);

    printf("Frequency of 8 is : %d ",iRet);



    return 0;
}
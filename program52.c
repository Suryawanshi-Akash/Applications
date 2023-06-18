#include<stdio.h>
#include<stdbool.h>

float DigitAverage(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        
        
        iNo = iNo/10;
        
    }


}

int main()
{
    int iValue = 0;
    float fRet = 0.0;

    printf("Enter the Number \n");
    scanf("%d", &iValue);

    fRet = DigitAverage(iValue);

    printf("the Average of Digits is : %d", fRet);

    return 0;
}
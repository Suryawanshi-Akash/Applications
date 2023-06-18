#include<stdio.h>
#include<stdbool.h>


bool CheckNumber(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \n", iDigit);
        
        if(iDigit == 8)
        {
            break;
        }
        iNo = iNo/10;
    }
    
    if(iDigit == 8)
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

    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    bRet = CheckNumber(iValue);

    if(bRet = true)
    {
        printf("Digit 8 is present in number \n");
    }
    
    if(bRet = false)
    {
        printf("Digit 8 is not present i number \n");
    }

    return 0;
}
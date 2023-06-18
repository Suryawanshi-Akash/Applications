#include<stdio.h>
#include<stdbool.h>

int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt=1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    } 
    return iSum;
}


int CheckPerfect(int iNumber)
{
    int iResult = 0;

    iResult = SumFactor(iNumber);

    if(iResult == iNumber)
    {
        return true;
    }
    else
    {
        return false;
    }

}

void printPerfectNumbers(int iValue)
{
    bool bRet = false;
    for(int i=0; i<iValue; i++)
    {
        bRet =  CheckPerfect(i);

        if(bRet == true)
        {
            printf("%d ," ,i);
        }
    }
}



int main()
{
    int iValue = 0;
    printf("Enter the Number \n");
    scanf("%d",&iValue);

    printPerfectNumbers(iValue);

    return 0;
}
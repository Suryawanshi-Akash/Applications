#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)    //O(n)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}

// Time complexity : O(N)
// Where  N is Natural Number
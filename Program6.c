/////////////////////////////////////////////////////////////////////////
//Write a program which check whether number is even or odd
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>          //for printf and scanf
#include<stdbool.h>        //for bool datatype

/////////////////////////////////////////////////////////////////////////
//
//  Function Name :-        CheckEvenOdd
//  Input :-                Integer
//  Output :-               Boolean
//  Description :-          Checks whether input is even or odd
//  Author :-               Akash Vilas Suryawanshi
//  Date :-                 25/04/2023
//
/////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////
//Entry point Function
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;       //Variable to accept input
    bool bRet = false;    // Variable to accept return value

    printf("Please enter number to check whether it is even or odd : \n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number \n",iValue);
    }
    else
    {
        printf("%d is Odd number \n",iValue);
    }
    return 0;
}
/////////////////////////////////////////////////////////////////////////
//Write a program which check whether number is divisible by 3 and 5
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>          //for printf and scanf
#include<stdbool.h>        //for bool datatype

/////////////////////////////////////////////////////////////////////////
//
//  Function Name :-        CheckDivisible
//  Input :-                Integer
//  Output :-               Boolean
//  Description :-          Checks whether input is divisible by 3 and 5
//  Author :-               Akash Vilas Suryawanshi
//  Date :-                 25/04/2023
//
/////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
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

    printf("Please enter number to check whether it is Divisible by 3 and 5 : \n");
    scanf("%d", &iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is completly divisible by 3 and 5 \n",iValue);
    }
    else
    {
        printf("%d is not completly divisible by 3 and 5 \n",iValue);
    }
    return 0;
}
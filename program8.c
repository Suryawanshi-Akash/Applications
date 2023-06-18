/////////////////////////////////////////////////////////////////////////
//Write a program which accept the mark and display the class accordingly
// o to 34      fail
//35 to 48      pass class
// 50 to 59     second class
// 60 to 74     first class
// 75 to 100    dirst class with distinction
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>          //for printf and scanf


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

void DisplayClass(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks>100.0f))
    {
        printf("Invalid input \n");
        printf("Please enter marks between 0 and 100 ");
        return;
    }


    if((fMarks >= 0.0)&&(fMarks<35.00f))
    {
        printf("You are Fail \n");
    }
    else if((fMarks >= 35.00f) && (fMarks < 50.00f))
    {
        printf("Pass class \n");
    }
    else if((fMarks >= 50.00f )&&(fMarks < 60.00f))
    {
        printf("Second class \n");
    }
    else if((fMarks >= 60.00f)&&(fMarks < 75.00f))
    {
        printf("First class \n");
    }
    else if((fMarks>= 75.00f)&&(fMarks<=100))
    {
        printf("you got First class with Distinction \n");
    }
}

/////////////////////////////////////////////////////////////////////////
//Entry point Function
/////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;

    printf("please enter your percentage : \n");
    scanf("%f", &fValue);

    DisplayClass(fValue);



    return 0;
}

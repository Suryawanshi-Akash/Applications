/////////////////////////////////////////////////////////////////////////////////////
//
//Problem statement : Writr a ptogram that takes input from user and performs Addition.
//
/////////////////////////////////////////////////////////////////////////////////////

/*
Algorithm:-
        Start
            1.Take first number from user as No1;
            2.Take Second number from user as No2;
            3.Create a variable names Ans to take Result of Addition;
            4.Perform Adiition of 2 numbers;
            5.Store the Additon in Ans Variable;
            6.Display the addition;
        Stop
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :- Addition
//  Input :- ivalue1 , ivalue2 ;
//  Output :- Ans
//  Description :- Performa Addition if two Integars
//  Author :- Akash vilas Suryawanshi
//  Date :- 19/04/2023
//
///////////////////////////////////////////////////////////////////////////////////////

unsigned int Addition(unsigned int ivalue1 , unsigned int ivalue2)
{
    unsigned int iResult = 0;

    iResult = ivalue1 + ivalue2;

    return iResult;

}

/////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////////////////////////


int main()
{
    auto unsigned int iNo1 = 0,  iNo2 = 0, iAns = 0;
    

    printf("Enter the first Number \n");
    scanf("%d", &iNo1);  

    printf("Enter the Second Number \n");
    scanf("%d", &iNo2);  

    iAns = Addition(iNo1,iNo2);

    printf("The Addition of two Numbers is : %d \n",iAns);


    return 0;
}

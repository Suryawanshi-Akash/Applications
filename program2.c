/*
    Steps to write an Application

    1. Understand the problem statement
    2. Write the algorithm
    3. Decide the programming language
    4. Write the Program
    5. test the Written Program


*/







#include<stdio.h>

int main()
{
    int No1 = 0;
    int No2 = 0;
    int Ans = 0;

    printf("Enter First number \n");
    scanf("%d", &No1);

    printf("Enter Second number \n");
    scanf("%d", &No2);

    Ans = No1 + No2;
    printf("The addition is %d \n",Ans);

    return 0; 
}
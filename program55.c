#include<stdio.h>
#include<stdlib.h>



int main()
{
    int Arr[5];
    int iCnt  = 0;

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt<5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);   
    }

    // scanf("%d",&Arr[0]);
    // scanf("%d",&Arr[1]);
    // scanf("%d",&Arr[2]);
    // scanf("%d",&Arr[3]);
    // scanf("%d",&Arr[4]);

    printf("Elements of Array are : \n");

    for(iCnt = 0; iCnt<5; iCnt++)
    {
        printf("%d",Arr[iCnt]);   
    }

    // printf("%d \n",Arr[0]);
    // printf("%d \n",Arr[1]);
    // printf("%d \n",Arr[2]);
    // printf("%d \n",Arr[3]);
    // printf("%d \n",Arr[4]);

    return 0;
}
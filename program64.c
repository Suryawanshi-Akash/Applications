#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0];
    int iCnt1 = 0;

    for(iCnt1 = 0; iCnt1<iLength; iCnt1++)
    {
        if(Arr[iCnt1] < iMin)
        {
            iMin = Arr[iCnt1];
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt  = 0;
    int iRet  = 0;

    printf("please enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr  = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("The elements are : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet  = Minimum(ptr, iSize);

    printf("The Minimum value is : %d", iRet);

    free(ptr);

    return 0;
}
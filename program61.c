#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iLength)
{
    
    int iCnt1 =0;
    int iSum = 0;

    for(iCnt1 = 0; iCnt1<iLength; iCnt1++)
    {
        iSum = iSum + Arr[iCnt1];
    }
    return ((float)iSum/(float)iLength);

}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0f;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("The elements are : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d \n", ptr[iCnt]);
    }

    fRet = Average(ptr,iSize);
    printf("The average is : %d", fRet);
    

    free(ptr);

    return 0;
}
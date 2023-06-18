#include<stdio.h>
#include<stdlib.h>

void EvenDisplay(int Arr[], int iLength)
{
    
    int iCnt1 =0;
    int iCount = 0;

    for(iCnt1 = 0; iCnt1<iLength; iCnt1++)
    {
        if((Arr[iCnt1] % 2) != 0)
        {
            iCount++;
            
        }
    }
    printf("the Number of odd Numbers are :%d\n", iCount);
    

}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

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

    EvenDisplay(ptr,iSize);
    

    free(ptr);

    return 0;
}
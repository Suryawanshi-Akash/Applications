#include<stdio.h>
#include<stdlib.h>


void MaximumMinimum(int Arr[], int iLength)
{
    int iMax = Arr[0];
    int iMin = Arr[0];
    int iCnt1 = 0;

    for(iCnt1 = 0; iCnt1<iLength; iCnt1++)
    {
        if(Arr[iCnt1] > iMax)
        {
            iMax = Arr[iCnt1];
        }
        
        if(Arr[iCnt1] < iMin)
        {
            iMin = Arr[iCnt1];
        }
       
    }

    printf("Largest element is : %d \n", iMax);
    printf("Smallest element is : %d \n", iMin);

}


int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt  = 0;
    

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

    MaximumMinimum(ptr, iSize);

   

    free(ptr);

    return 0;
}
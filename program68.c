#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt1 = 0;
   

    for(iCnt1 = 0; iCnt1<iLength; iCnt1++)
    {
        if(Arr[iCnt1] == iNo)
        {
            
            break;
        }
    }
    if(iCnt1 == iLength)
    {
        return false;
    }
    else 
    {
        return true;
    }
    
}



int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt  = 0;
    int iValue = 0;
    bool bRet = false;

    printf("please enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr  = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element that you want to search \n ");
    scanf("%d",&iValue);

    printf("The elements are : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    bRet = Search(ptr,iSize, iValue);

    if(bRet  == true)
    {
        printf("%d is present in Array \n", iValue);
    }
    else 
    {
        printf("%d is not present in Array \n", iValue);
    }

    free(ptr);

    return 0;
}
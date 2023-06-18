#include<stdio.h>
#include<stdlib.h>



int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the number of Elements : \n");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate Memory \n");
        return -1;
    }

    printf("Memory Allocated Successfully..");

    return 0;
}
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0;
    int j = 0;

    if(iRow != iCol)
        {
            printf("invalid input\n");
            return;
        }

    for(i = 1; i<=iRow; i++)
    {
        for(j =1;j<=iCol;j++)
        {
            if(i == j)
            {
                printf("%%\t");
                
            }
            else if((i == 1) || (i == iRow) || (j == 1) || (j == iCol ) )
            {
                printf("*\t");
            }
            else if(i<j)
            {
                printf("@\t");
            }
            else if(i>j)
            {
                printf("#\t");
            }
        }
        
        printf("\n");
        printf("\n");
    }

    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of Coloumn : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);


    return 0;
}
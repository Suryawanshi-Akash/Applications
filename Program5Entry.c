#include"Program5Header.h"

/////////////////////////////////////////////////////////////////////////////////////
// Entry Point Function
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
#include<stdio.h>
#include<string.h>

int CountSpace(char str[])   //(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str==' '))
        {
        iCnt++;
        }
        str++;
    }
    return iCnt;
}



int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);    //strlenX(100)

    printf("Number of Spaces in string is : %d\n",iRet);



    return 0;
}
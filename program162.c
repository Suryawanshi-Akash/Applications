#include<stdio.h>
#include<string.h>

int strlenDigitX(char str[])   //(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str>='0')&&(*str<='9'))
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

    iRet = strlenDigitX(Arr);    //strlenX(100)

    printf("Number of Digits in string is : %d\n",iRet);



    return 0;
}
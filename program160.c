#include<stdio.h>
#include<string.h>

int strlensmall(char str[])   //(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str>='a')&&(*str<='z'))
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

    iRet = strlensmall(Arr);    //strlenX(100)

    printf("Length of small characters string is : %d\n",iRet);



    return 0;
}
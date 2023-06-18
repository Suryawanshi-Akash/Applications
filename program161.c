#include<stdio.h>
#include<string.h>

int strlenCapital(char str[])   //(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str>='A')&&(*str<='Z'))
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

    iRet = strlenCapital(Arr);    //strlenX(100)

    printf("Length of Capital characters string is : %d\n",iRet);



    return 0;
}
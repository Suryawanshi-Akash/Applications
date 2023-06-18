#include<stdio.h>
#include<string.h>

int CountChar(char str[],char cValue)   //(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str== cValue))
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
    char ch = '\0';
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character :\n");
    scanf("%c",&ch);

    iRet = CountChar(Arr,ch);    //strlenX(100)

    printf("Number of Occurances in string is : %d\n",iRet);

    return 0;
}
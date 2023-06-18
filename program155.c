#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch>='a')&&(ch<='z'))
    {
        return true;
    }
    return false;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character :\n");
    scanf("%c",&cValue);

    bRet  = CheckSmall(cValue);

    if(bRet == true)
    {
        printf("%c is a Small letter\n",cValue);

    }
    else 
    {
        printf("%c is not a Small letter\n",cValue);
    }


    return 0;
}
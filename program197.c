#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    bool bFlag = true;

    start = str;
    end = str;

    while(*str != '\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        if(*start != *end)
        {
            bFlag = false;
        }
        start++;
        end--;
    }
    return bFlag;

}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter the String : \n");
    scanf("%[^'\n'] ",Arr);

    bRet = CheckPallindrome(Arr);

    if(bRet == true)
    {
        printf("string is pallindrome \n");
    }
    else
    {
        printf("string is not pallindrome \n");
    }


    return 0;
}
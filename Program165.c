#include<stdio.h>
#include<stdbool.h>

bool CountSpace(char str[])   //(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str=='z'))
        {
            return true;
        }
        else
        {
            return false;
        }
        str++;
    }
    
}



int main()
{
    char Arr[20];
    bool bRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    bRet = CountSpace(Arr);    //strlenX(100)

    // printf("Number of Spaces in string is : %d\n",bRet);
    if(bRet == true)
    {
        printf("There is z in string");
    }
    else
    {
        printf("There is no z in string");
    }



    return 0;
}
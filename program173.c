#include<stdio.h>
#define ERR_NOTFOUND -1

void Frequency(char *str)
{
    int iSmallCnt  = 0;
    int iCapCnt  = 0;

    while(*str != '\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCapCnt++;  
        }
        else if((*str>='a')&&(*str<='z'))
        {
            iSmallCnt++;
        }
    }
    printf("Small case character count is :%d",iSmallCnt);
    printf("Small case character count is :%d",iSmallCnt);
}

int main()
{
    char Arr[20];
    

    printf("Enter the String : \n");
    scanf("%s",Arr);

    Frequency(Arr);

}
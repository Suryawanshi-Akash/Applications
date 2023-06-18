#include<stdio.h>
#define ERR_NOTFOUND -1

void EditString(char *str)
{
    while(*str != '0')
    {
        if(*str == ' ')
        {
            *str = '_';
        }
        str++;
    }

}

int main()
{
    char Arr[20];
    char ch  ='\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    EditString(Arr);

    printf("string after editing is : %s\n",Arr);

}
#include<stdio.h>
#define ERR_NOTFOUND -1

void StrtoggleX(char *str)
{
    int Gap = 'a' - 'A';
    while(*str != '0')
    {
        if((*str>= 'a') && (*str<='z'))
        {
            *str = *str - Gap;
        }
        else if((*str>= 'A') && (*str<='Z'))
        {
            *str = *str + Gap;
        }
        str++;
    }

}

int main()
{
    char Arr[20];
    char ch  ='\0';
    

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    //printf("Enter the character that you want to search : \n");


    StrtoggleX(Arr);

    printf("string after editing is : %s\n",Arr);

}
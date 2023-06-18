#include<stdio.h>
#define ERR_NOTFOUND -1

void StrlwrX(char *str)
{
    while(*str != '0')
    {
        if((*str>= 'A') && (*str<='Z'))
        {
            *str = *str + 32;
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


    StrlwrX(Arr);

    printf("string after editing is : %s\n",Arr);

}
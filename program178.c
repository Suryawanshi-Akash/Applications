#include<stdio.h>
#define ERR_NOTFOUND -1

void StruprX(char *str)
{
    while(*str != '0')
    {
        if((*str>= 'a') && (*str<='z'))
        {
            *str = *str - 32;
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


    StruprX(Arr);

    printf("string after editing is : %s\n",Arr);

}
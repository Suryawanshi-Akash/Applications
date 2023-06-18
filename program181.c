#include<stdio.h>
#define ERR_NOTFOUND -1

void strcpyX(char *src , char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
   
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr, Brr);

    printf("string after Copy is : %s\n",Brr);

}
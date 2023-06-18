#include<stdio.h>
#define ERR_NOTFOUND -1

void strcpysmallX(char *src , char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
        *dest = *src;
        dest++;
        }
        src++;
        
    }
    *dest = '\0';
   
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    strcpysmallX(Arr, Brr);

    printf("string after Copy is : %s\n",Brr);

}
#include<stdio.h>
#define ERR_NOTFOUND -1

void strcpycapX(char *src , char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
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

    strcpycapX(Arr, Brr);

    printf("string after Copy is : %s\n",Brr);

}
#include<stdio.h>
#define ERR_NOTFOUND -1

void strcpyrevX(char *src , char *dest)
{
    int iLength = 0;

    while(*src != '\0')
    {
        src++;
        iLength++;
    }
    src--;

    while(iLength!= 0)
    {
        *dest = *src;
        src--;
        dest++;
        iLength--;
    }
    *dest = '\0';
    
   
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    strcpyrevX(Arr, Brr);

    printf("string after Copy is : %s\n",Brr);

}
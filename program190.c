#include<stdio.h>
#define ERR_NOTFOUND -1

void strcpyX(char *src , char *dest, int iLength)
{
    while(*src != '\0' && iLength != 0)
    {
        *dest = *src;
        src++;
        dest++;
        iLength--;
    }
    *dest = '\0';
   
}

int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);
    printf("Enter the number of characters that you want too copy\n");
    scanf("%d",&iNo);

    strcpyX(Arr, Brr, iNo);

    printf("string after Copy is : %s\n",Brr);

}
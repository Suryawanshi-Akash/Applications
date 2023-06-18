#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
  

}

int main()
{
    char Arr[20];
    

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("Reversed string : %s\n",Arr);

}
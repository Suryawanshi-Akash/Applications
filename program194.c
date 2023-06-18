#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1, char *str2)
{
    for(;(*str1 != '\0')&&(*str2 != '\0')&&(*str1 == *str2);*str1++,*str2++);
    
    return((*str1 == '\0') &&(*str2 == '\0'));
   

}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;


    printf("Enter the first String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the second string : \n");
    scanf(" %[^'\n']s",Brr);

    bRet = strcmpX(Arr,Brr);

    if(bRet == true)
    {
        printf("both the strings are identical\n");
    }
    else
    {
        printf("both the strings are differnet\n");
    }


    return 0;
}


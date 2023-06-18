#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurance(char *str, char cValue)
{
    int iCnt = 1;
    

    while(*str != '\0' && (*str != cValue) )
    {
        
        iCnt++;
        str++;

    }
    if(*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }


}

int main()
{
    char Arr[20];
    char ch  ='\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character you want to search :\n");
    scanf(" %c",&ch);

    iRet = FirstOccurance(Arr,ch);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such Character\n");
    }
    else
    {
        printf("First occurance of that character is %d",iRet);
    }

    



}
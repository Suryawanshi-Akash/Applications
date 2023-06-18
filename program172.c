#include<stdio.h>
#define ERR_NOTFOUND -1

int LastOccurance(char *str, char cValue)
{
    int iCnt = 1;
    int iPos = ERR_NOTFOUND;

    while(*str != '\0' )
    {
        if(*str == cValue)
        {
            iPos = iCnt;
           
        }
        iCnt++;
        str++;

    }
    return iPos;


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

    iRet = LastOccurance(Arr,ch);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such Character\n");
    }
    else
    {
        printf("Last occurance of that character is %d",iRet);
    }

    



}
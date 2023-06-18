#include<stdio.h>

int FirstOccurance(char *str, char cValue)
{
    int iCnt = 1;
    int iPos = 0;

    while(*str != '\0' )
    {
        if(*str == cValue)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
        str++;

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

    printf("Firsst occurance of that character is %d",iRet);



}
//Write a program which accepts file name from user and one another character from user
//and count number of occurrences of that character from that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<io.h>

int CountChar(char FName[],char Ch)
{
    int fd = 0,iCnt = 0,iCount = 0,iRet = 0;
    char Arr[50] = {'\0'};
    
    fd = open(FName,O_RDONLY);

    if( fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }

    while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
    {
        for(iCnt = 0;iCnt < iRet ; iCnt++)
        {
            if(Arr[iCnt] == Ch) 
            {
                iCount++;
            }
        }    
    }
    close(fd);
    return iCount;


}
int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;
    char cValue = '\0';

    printf("Enter File name:\n");
    scanf("%s",&FileName);

    printf("Enter Character:\n");
    scanf(" %c", &cValue);

    iRet = CountChar(FileName,cValue);

    printf("Frequency is:%d",iRet);

    return 0;
}
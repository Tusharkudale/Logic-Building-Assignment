//Write a program which accepts file name and one count from user abd read that number of character from starting position

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<io.h>

void DisplayN(char FName[],int iSize)
{
    int fd = 0,iCnt = 0,iCount = 0,iRet = 0;
    char Arr[50] = {'\0'};
    
    fd = open(FName,O_RDONLY);

    while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
    {
        for(iCnt = 0;iCnt < iSize ; iCnt++)
        { 
            {
                printf("%c",Arr[iCnt]);
            }
        }    
    }
    close(fd);

}
int main()
{
    char FileName[30] = {'\0'};
    int iValue = 0;

    printf("Enter File name:\n");
    scanf("%s",&FileName);

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayN(FileName,iValue);

    return 0;
}
//Write a program which accepts file name from user and count number of white spaces from that file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<io.h>

int CountWhite(char FName[])
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
            if(Arr[iCnt] == ' ') 
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

    printf("Enter File name:\n");
    scanf("%s",&FileName);

    iRet = CountWhite(FileName);

    printf("Number of White Spaces are:%d",iRet);

    return 0;
}
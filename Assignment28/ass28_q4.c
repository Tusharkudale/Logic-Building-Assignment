//Write application which accpet file name from user and display size of file.

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0,iRet = 0,iSum = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter file name:");
    scanf("%s",&Fname);

    fd = open(Fname,O_RDONLY);

    if( fd == -1)
    {
        printf("unable to open file");
        return -1;
    }
    else
    {
        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            iSum = iSum + iRet;
        }
        printf("File size is: %d bytes",iSum);

        close(fd);
    }
    return 0;
}
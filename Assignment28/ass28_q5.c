//Write application which accept file name from user and also accept one string from user .
//write that string at the end of the file.

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0,iRet = 0,i = 0;
    char Fname[20] = {'\0'};
     char Arr[50] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter file name:");
    scanf("%s",&Fname);

    printf("Enter String:\n");
    scanf(" %[^'\n']", Arr);

    fd = open(Fname,O_RDWR | O_APPEND);
    while(Arr[i] != '\0')
    {
        Buffer[i] = Arr[i];
        i++;
    }
    Buffer[i] = '\0';

    if( fd == -1)
    {
        printf("unable to open file");
        return -1;
    }
    else
    {
        iRet = write(fd,Buffer,i);
    
        printf(" %d bytes is Successfully Written",iRet);

    }
    close(fd);
    return 0;
}
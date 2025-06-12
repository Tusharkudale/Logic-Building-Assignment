//Write application which accpet file name from user and read all data from that file and display contensts on screen

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0,iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter file name that you want to open:\n");
    scanf("%s",&Fname);

    fd = open(Fname,O_RDONLY);
     if(fd == -1)
    {
        printf("unable to create file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened and Displaying the data on screen\n");
       
        while((iRet = read(fd,Buffer,sizeof(BUFFER_SIZE))) != 0)

        write(1,Buffer,iRet);
        memset(Buffer,'\0',BUFFER_SIZE);
        
        close(fd);
    }
    

    return 0;
}
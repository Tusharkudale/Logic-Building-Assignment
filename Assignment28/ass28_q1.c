//Write application which accpet file name from user and open that file in read mode

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter file name which you want to open :\n");
    scanf("%s",&Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }
    else
    {
        printf("File is successfully opened");
    }

    return 0;
}
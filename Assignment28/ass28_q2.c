//Write application which accpet file name from user and open that file in read mode

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter file name that you want to create:\n");
    scanf("%s",&Fname);

    fd = creat(Fname,0777);
     if(fd == -1)
    {
        printf("unable to create file\n");
        return -1;
    }
    else
    {
        printf("File is successfully created");
    }
}
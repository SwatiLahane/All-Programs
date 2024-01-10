#include<stdio.h>
#include<fcntl.h> //File Control for open and create
#include<unistd.h>//universal std

int main()
{
    //file discriptor
    int fd = 0;
    
    fd = creat("Marvellous.txt",0777);
    if(fd != -1)
    {
        printf("File is successfully created with FD : %d\n",fd);

    }

    return 0;
}
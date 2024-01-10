#include<stdio.h>
#include<fcntl.h> //File Control for open and create
#include<unistd.h>//universal std

int main()
{
    //file discriptor
    int fd = 0;
    
    fd = open("Marvellous.txt",O_RDWR);
   

    if(fd != -1)
    {
        printf("File is successfully Open with FD : %d\n",fd);

    }
   close(fd);
    return 0;
}

//O_RDONLY : Read 
//O_WRONLY : Write 
//O_RDWR   : Read + Write
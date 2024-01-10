#include<stdio.h>
#include<fcntl.h> //File Control for open and create
#include<unistd.h>//universal std
#include<string.h>
int main()
{
    //file discriptor
    int fd = 0;
    char Arr[] = "Marvellous Infosystem";
     int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);
    
    //Ret = write(fd ,Arr,22); //(Kashat lihaych ,kay lihaych ,kiti lihaych)
      Ret = write(fd ,Arr,strlen(Arr));
    printf("%d bytes gets written in the file\n",Ret);

    close(fd);
    return 0;
}

//O_RDONLY : Read 
//O_WRONLY : Write 
//O_RDWR   : Read + Write
#include<stdio.h>
#include<fcntl.h> //File Control for open and create
#include<unistd.h>//universal std
#include<string.h>
int main()
{
    //file discriptor
    int fd = 0;
    char Arr[20];
     int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);
    
    //Ret = write(fd ,Arr,22); //(Kashatun wachaych ,kashyat wachaych ,kashyat lihaych)
      Ret = read(fd ,Arr,10);
    printf("%d bytes gets written in the file\n",Ret);
    printf("Data is : %s\n",Arr);

    close(fd);
    return 0;
}

//O_RDONLY : Read 
//O_WRONLY : Write 
//O_RDWR   : Read + Write
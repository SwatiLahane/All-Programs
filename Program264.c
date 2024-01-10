

//Count Digits  from file 

//accept file name from user  

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};
    int iSize = 0;
    int i=0; 
    int iCount =0;
    int fd =0 ,iRet =0;
  
    printf("Enter the name of file that you want to open from current directory\n"); 
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR );
    
    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }
   else
   {
       printf("%s gets opened successfully with file descriptor %d\n",FileName,fd);
       
       while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
       {
          for(i =0; i < iRet; i++)
          {
              if((Arr[i] >= '0') && (Arr[i] <= '9'))
              {
                  iCount++;
              }
          }
         
       }  

        printf("Number digits in the file are :%d\n",iCount);
       
       close(fd);
   }
      
    return 0;
    
}
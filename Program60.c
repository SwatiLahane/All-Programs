//accept n numbers from user and return even number of count 

#include<stdio.h> //For printf scanf 
#include<stdlib.h> //For malloc Calloc 

int EvenDisplay(int Arr[], int iSize) //(100 ,4)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    cout<<"\nEven Elements of the array are : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {  
    if((Arr[iCnt] % 2 == 0))
      {
       // printf("%d\t",Arr[iCnt]);
        iEvenCnt++;
      }
         printf("\n");
   }
  return iEvenCnt;
   
}

int main()
{
   int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

   printf("Enter the Number of elements that you want to enter\n");
   scanf("%d",&iCount);

   ptr = (int *) malloc(iCount * sizeof(int)); 
   printf("Dynamic memory gets allocated successfully for %d elements\n",iCount);
   
   printf("ENter the %d Values:\n",iCount);
   for(iCnt = 0; iCnt < iCount ; iCnt++)
   {
       printf("\n Enter the element no %d : ",iCnt+1);
       scanf("%d",&ptr[iCnt]);
   }

   iRet= EvenDisplay(ptr ,iCount); //Display(100,4)
   
   printf("Number of Even element are :%d\n",iRet);
   free(ptr); //(100)
   printf("Dynamic Memory gets deallocated successfully...\n");

    return 0;
}
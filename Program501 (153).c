
//4.Write a elprogram which return largest elment from singly linear linked list 

#include<stdio.h>
#include<stdlib.h> //for malloc and free

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

struct node    //structure declaration
{
    int data;
    struct node *next;

 
};


typedef struct node NODE; 
typedef struct node* PNODE;
typedef struct node** PPNODE;


//Function to insert Elements in singly ll
void InsertFirst(PPNODE Head , int No)  
{

  PNODE newn =NULL;
  newn = (PNODE) malloc(sizeof(NODE));

  newn->data = No;
  newn->next = NULL;

  if(*Head == NULL)
  {
      *Head = newn;
  }
  
  else
  {
      newn->next = *Head;
      *Head = newn;
  }

}

//function to display elements of linked list 
void Display(PNODE Head)
{
    printf("Elements of Linked list:\n");
    {
        while(Head != NULL)
        {
         printf("| %d |-> ",Head->data);
         Head = Head->next;
        }
        printf("NULL\n");
    }
}

//count Function to count nodes of linked list 
int Count(PNODE Head)
{
     int icnt =0;

     while(Head != NULL)
        {
            icnt++;
         Head = Head->next;
        }
        return icnt;
    }

//TO display Maximum element
int Maximum(PNODE Head)
{  
     int imax = -32768;  //MIN_INT;
    while(Head != NULL)
    {  
        if(Head ->data > imax)
        {
           imax = Head->data;

            
        }
       Head = Head->next;
    }
   
  return imax;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function from where execution starts
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

  PNODE First = NULL;  //
  int iRet = 0;

   InsertFirst(&First,110);
   InsertFirst(&First,230);
   InsertFirst(&First,320);
   InsertFirst(&First,240);
  
    Display(First);      //
    iRet = Count(First);
    printf("Number of Nodes is : %d\n",iRet);
    

    iRet = Maximum(First);  //Function call
    printf("Addition is :%d\n",iRet);
    return 0;
}
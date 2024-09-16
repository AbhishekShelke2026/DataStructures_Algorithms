#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node  NODE;
typedef struct node*  PNODE;
typedef struct node**  PPNODE;

void InsertLast(PPNODE First , int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    //step 1 : Allocate dynamic memory for new node
    newn = (PNODE) malloc (sizeof(NODE));

    //step 2 : Initialize the new node
    newn -> data = No;
    newn -> next =NULL;

    //step 3 : check if link list is empty
    if(*First == NULL)
    {
        *First = newn;
    }

    else // if link list contains atleast one node in it
    {
        temp = *First;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
    }
    temp -> next = newn;


}


void InsertFirst(PPNODE First , int No)
{
    PNODE newn = NULL;

    //step 1 : Allocate dynamic memory for new node
    newn = (PNODE) malloc (sizeof(NODE));

    //step 2 : Initialize the new node
    newn -> data = No;
    newn -> next =NULL;

    //step 3 : check if link list is empty
    if(*First == NULL)
    {
        *First = newn;
    }

    else // if link list contains atleast one node in it
    {
        newn -> next = *First;
        *First = newn;
    }


}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First -> data);
        First = First -> next;
    }
    printf("NULL\n");


}

int Count (PNODE First)
{
    int iCnt = 0;

    while(First != 0)
    {
        iCnt++;
        First = First -> next;
    }
    
    return iCnt;

}



int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head , 101);
    InsertFirst(&Head , 51); // InsertFirst(60 , 51);
    InsertFirst(&Head , 21);
    InsertFirst(&Head , 11);
    

    Display(Head);

    iRet = Count(Head);

    printf("NUmber of elements are : %d\n",iRet);

    InsertLast (&Head , 111);
    InsertLast (&Head , 121);
    InsertLast (&Head , 151);

    Display(Head);

    iRet = Count(Head);

    printf("Number of elements are : %d\n",iRet);    

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE; 


void InsertFirst(PPNODE First , int No)
{
    PNODE newn  = NULL;

    newn = (PNODE) malloc (sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }

    else
    {
        newn -> next = *First;
        *First = newn;
    }

} // time complexity = o(1)


void InsertLast (PPNODE First , int No)
{
    PNODE newn  = NULL;
    PNODE temp = NULL;

    newn = (PNODE) malloc (sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }

    else
    {
        temp = *First;

        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;

    }


}  // time compleixty o(N)


void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First -> data);
        First = First -> next;

    }
    printf("NULL\n");

}  // time complexity = o(N)

int Count (PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;

    }
    return iCnt;

}  // time complexity = 


void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;


    if ( *First == NULL)  //case 1
    {
        printf("Unable to delets as linkList is empty\n");

        return;

    }


    else if ((*First) -> next == NULL)  //case 2
    {
        free(*First);

        *First = NULL;

    }

    else   //case 3
    {
        temp = *First;

        *First = (*First) -> next;

        free(temp);
    }

}


void DeleteLast(PPNODE First)
{
    if ( *First == NULL)  //case 1
    {
        printf("Unable to delets as linkList is empty\n");

        return;

    }

    else if ((*First) -> next == NULL)  //case 2
    {
        free(*First);

        *First = NULL;

    }

    else   //case 3
    {
        


    }

}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head , 51);
    InsertFirst(&Head , 21);
    InsertFirst(&Head , 11);

    InsertLast(&Head , 101);
    InsertLast(&Head , 111);
    InsertLast(&Head , 121);
    

    Display(Head);

    iRet = Count(Head);

    printf("Number of elements are : %d\n",iRet);

    DeleteFirst(&Head);

    Display(Head);
    iRet = Count(Head);

    printf("Number of elements are %d\n",iRet);



    return 0;
}


/*
    InsertFirst 
        1: Allocate memory for node
        2: Initialize the node
        3: Check weather link list is empty
        4: if ll is empty store the address of new node in the heap pointer through first
        5: otherwisw store the address of old first node in the next of new node
        6: update the head accordingly

*/
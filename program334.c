#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


int main()
{
    PNODE Head  = NULL;

    NODE obj1;
    NODE obj2;
    NODE obj3;

    obj1.next = 11;
    obj1.next = &obj2;

    obj2.next = 21;
    obj2.next = &obj3;

    obj3.next = 51;
    obj3.next = NULL;


    Head = &obj1;

    printf("Head : %d\n",Head);
    printf("&obj1 : %d\n",&obj1);
    printf("&obj1 : %d\n",&obj2);
    printf("&obj1 : %d\n",&obj3);

    printf("Head -> data  : %d\n",Head -> data);
    printf("Head -> data  : %d\n",Head -> next);
    printf("Head -> next -> next : %d\n",Head -> next -> next);
    printf("Head -> next -> next -> next : %d\n",Head -> next -> next-> next);


    printf("Head -> next -> data : %d\n",Head -> next -> data);
    printf("Head -> next -> next -> data : %d\n",Head -> next -> next -> data);


    return 0;
}
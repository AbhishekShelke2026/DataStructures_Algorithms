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


    return 0;
}
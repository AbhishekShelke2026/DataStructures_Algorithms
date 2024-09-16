#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE Root , int No)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = (PNODE) malloc (sizeof(NODE));

    newn-> data = No;
    newn-> lchild = NULL;
    newn-> rchild = NULL;

    if(*Root == NULL)   //Tree is Emptys
    {
        *Root = newn;
    } 

    else        //Tree contains Atleast onr node
    {
        temp = *Root;

        while(1)
        {
            if(temp -> data == No)
            {
                printf("unalbe to insert node as element is already inserted\n");
                free(newn);
                break;
            }

            else if(No > temp -> data)
            {
                if (temp -> rchild == NULL)
                {
                    temp -> rchild = newn;
                    break;
                }

                temp = temp -> rchild;
            
            }

            else if (No < temp -> data)
            {
                if(temp -> lchild == NULL)
                {
                    temp -> lchild = newn;
                    break;
                }

                temp = temp -> lchild;
            }
        }
    }

}

void Inorder (PNODE Root)
{
    if(Root != NULL)
    {
        Inorder(Root -> lchild);
        printf("%d",Root->data);
        Inorder(Root -> rchild);
        
    }
}

void Preorder (PNODE Root)
{
    if(Root != NULL)
    {
        printf("%d",Root->data);
        Preorder(Root -> lchild);
        Preorder(Root -> rchild);
        
    }
}

int main()
{
    PNODE Head  = NULL;

    Insert(&Head , 21);
    Insert(&Head , 11);
    Insert(&Head , 51);

    Preorder(Head);


    return 0;
}
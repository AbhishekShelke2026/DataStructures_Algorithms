#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void Postorder (PNODE Root)
{
    if(Root != NULL)
    {
        Postorder(Root -> lchild);
        Postorder(Root -> rchild);
        printf("%d",Root->data);
        
    }
}

bool Search (PNODE Root , int No)
{
    bool flag = false;

    if(Root == NULL)
    {
        printf("Tree is empty\n");
        return false;
    }

    while(Root != NULL)
    {
        if(Root -> data == No)
        {
            flag = true;
            break;
        }
    

        else if(No > Root -> data)
        {
            Root = Root -> rchild;
        }

        else if(No < Root -> data)
        {
            Root = Root -> lchild;
        }
    }
    return flag;

}

int CountLeaf(PNODE Root)
{
    static int iCnt = 0;

    if(Root != NULL)
    {
        if(Root -> rchild == NULL   &&   Root-> lchild == NULL)
        {
            iCnt++;
        }
        CountLeaf(Root -> rchild);
        CountLeaf(Root -> lchild);
    }
    return iCnt;
}



int main()
{
    PNODE Head  = NULL;
    int iRet = 0;

    Insert(&Head , 21);
    Insert(&Head , 34);
    Insert(&Head , 11);
    Insert(&Head , 98);
    Insert(&Head , 44);
    Insert(&Head , 28);
    Insert(&Head , 11);
    Insert(&Head , 7);
    Insert(&Head , 17);

    iRet = CountLeaf(Head);

    printf("no. of leafs node are : %d\n",iRet);


   



    return 0;
}
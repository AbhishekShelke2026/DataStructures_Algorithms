#include<iostream>
using namespace std;

struct node
{
    int data;

    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCl
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        SinglyCl();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No , int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCl :: SinglyCl()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void SinglyCl :: Display()
{
    if((First == NULL) && (Last == NULL))
    {
        return;
    }

    do
    {
        cout<<"|"<<First -> data<<"|->";
    }while(First != Last -> next);

    cout<<"\n";

}

int SinglyCl :: Count()
{
    int iCount = 0;

    if ((First == NULL) && (Last == NULL))
    {
        return 0;
    }

    do
    {
        iCount++;
        First = First ->  next;
    } while (First != Last -> next);

    return iCount;
    
    
}

void SinglyCl :: InsertFirst(int No)
{
    PNODE newn = NULL;

    newn  = new NODE;

    newn -> data = 0;
    newn -> next = NULL;

    if(First == NULL)
    {
        First = newn;
    } 

    else
    {
        newn -> next = First;

        First = newn;
    }
    iCount ++;
}

void SinglyCl :: InsertLast(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = 0;
    newn -> next = NULL;

    if((First == NULL) && ( Last == NULL))
    {
        First = newn;
        Last = newn;

    }

    else
    {
        Last -> next = newn;

        Last = newn;
    }
    Last -> next = First;


    
}

void SinglyCl :: InsertAtPos(int No , int iPos)
{
    PNODE newn = NULL;

    int i = 0;

    PNODE temp;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"invalid position";
        return;

    }

    if (iPos == 1)
    {
        InsertFirst(No);
    }

    else if (iPos == iCount + 1)
    {
        InsertLast(No);
    }

    else
    {
        temp = First;

        newn = new NODE;

        newn -> data = No;
        newn -> next = NULL;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;

        }
        newn -> next = temp -> next;

        temp -> next = newn;

    }
}

void SinglyCl :: DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        return;
    }

    else if (First == Last)
    {
        delete(First);

        First = NULL;
        Last = NULL;
    }

    else
    {
        First = First -> next;
        delete(Last -> next);
        Last -> next = NULL;
    }

    
}

void SinglyCl :: DeleteLast()
{
    PNODE temp = NULL;

    if((First == NULL) && (Last == NULL))
    {
        return;
    }

    else if (First == Last)
    {
        delete(First);

        First = NULL;
        Last = NULL;
    }

    else
    {
        temp = First;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

        delete (Last);

        Last = temp;

        Last -> next = First;
    }


    
}

void SinglyCl :: DeleteAtPos(int iPos)
{
    int i = 0;

    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        printf("invalid Syntax\n");

        return ;
    }

    if(iPos == 1 )
    {
        DeleteFirst();
    }

    else if (iPos == iCount + 1)
    {
        DeleteLast();
    }

    else
    {
        temp1 = Last;

        for(i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1 -> next;
        }
        temp2 = temp1 -> next;

        temp1 -> next = temp2 -> next;

        delete(temp2);

    }
    
    
}


int main()
{
    SinglyCl obj;
    int iRet = 0;
    
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are "<<iRet<<endl;


    obj.InsertLast(101);
    obj.InsertLast(121);
    obj.InsertLast(105);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are "<<iRet<<endl;


    obj.InsertAtPos(105 , 5);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are "<<iRet<<endl;
    

    obj.DeleteAtPos(5);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are "<<iRet<<endl;
    





    return 0;
}
#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
        Queue();
        void Display();
        int Count();
        void EnQueue(int No);    // Insert Last
        int DeQueue();      // DeleteFirst
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

void Queue :: Display()
{
    cout<<"Element of Q are :\n";
    PNODE temp = First;

    while (temp != NULL)
    {
        cout<<temp -> data<<"\t";
        temp = temp -> next;
    }
    cout<<"\n";
    
}

int Queue :: Count()
{
    return iCount;
} 

void Queue :: EnQueue(int No)     //InsertLast
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = No;
    newn -> next = NULL;

    if (First == NULL)
    {
        First = newn;
    }

    else
    {
        temp = First;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        } 

        temp -> next = newn;
    }
    iCount++;

}

int Queue :: DeQueue()      //DeleteFirst
{
    int iValue = 0;
    PNODE temp = NULL;

    if (First == NULL)
    {
        cout<<"unalbe to remove as quque is empty\n";
        return -1;
    }

    else
    {
        temp = First;
        iValue = First -> data;
        First = First -> next;
        delete temp;

        iCount--;
    }

    return iValue;

}

int main()
{
    Queue obj;
    int iRet = 0;

    obj.EnQueue(10);
    obj.EnQueue(20);
    obj.EnQueue(30);
    obj.EnQueue(40);

    obj.Display();

    iRet = obj.Count();

    cout<<"no of element in the atack are :"<<iRet<<"\n";

    iRet = obj.DeQueue();

    cout<<"removed element is :"<<iRet<<"\n";

    iRet = obj.DeQueue();

    cout<<"removed element is :"<<iRet<<"\n";

    obj.Display();

    iRet = obj.Count();

    cout<<"No . of element is the Queue are : "<<iRet<<"\n";

    obj.EnQueue(50);

    obj.Display();

    iRet = obj.Count();

    cout<<"No. of element in the Queue are "<<iRet<<"\n";


    return 0;
}
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Stack
{
    private:
        PNODE First;
        int iCount;

    public:
        Stack();
        void Display();
        int Count();
        void Push(int No);  // InsertFirst()
        int Pop();   // DeleteFirst()
};

Stack :: Stack()
{
    First = NULL;
    iCount  = 0;

}

void Stack :: Display()
{
    cout<<"elements of stacks are :\n";

    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<temp -> data<<"\n";
        temp = temp -> next;
    }
    cout<<"\n";

}

int Stack :: Count()
{
    return iCount;
}

void Stack :: Push(int No)  //Insert First
{
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
        newn -> next =First;
        First = newn;
    }
    iCount++;

}

int Stack :: Pop()      // DeleteFirst
{
    int iValue = 0;
    PNODE temp = NULL;

    if (First == NULL)
    {
        cout<<"unable to pop the element as stack is empty\n";
        return -1;
    }

    else
    {
        temp = First;

        iValue = First -> data;
        First = First -> next;

        delete temp;
        

    }
    return iValue;
}

int main()
{
    Stack obj;
    int iRet = 0;

    obj.Push(10);
    obj.Push(20);
    obj.Push(30);
    obj.Push(40);

    obj.Display();

    iRet = obj.Count();

    cout<<"no of element in the atack are :"<<iRet<<"\n";

    iRet = obj.Pop();

    cout<<"poped element is :"<<iRet<<"\n";

    obj.Display();

    iRet = obj.Count();

    cout<<"No . of element is the stack are : "<<iRet<<"\n";

    obj.Push(50);

    obj.Display();

    iRet = obj.Count();

    cout<<"No. of element in the stack are "<<iRet<<"\n";

    

    return 0;
}
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
    int iChoice = 0;
    int iNo = 0;

    cout<<"----------Implementation of Queue----------\n";

    while(iChoice != 5)
    {
        cout<<"please select your choice :\n";
        cout<<"1 : insert new element in Queue\n";
        cout<<"2 : Remove the element from Queue\n";
        cout<<"3 : Display the element from Queue\n";
        cout<<"4 : Count No of element in Queue\n";
        cout<<"5 : Exit\n" ;
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"enter the element that u want to insert :\n";

                cin>>iNo;
                obj.EnQueue(iNo);
            break;

            case 2:
                iNo = obj.DeQueue();
                
                if(iNo != -1)
                {
                    cout<<"removed element is :"<<iNo<<"\n";
                }

            break;


            case 3:
                obj.Display();
            break;


            case 4: 
                iNo = obj.Count();
                cout<<"No of element in Queue Are :"<<iNo<<"\n";

            break;


            case 5:
                cout<<"thanks for using our application\n";

            break;

        }

    }

    return 0;
}
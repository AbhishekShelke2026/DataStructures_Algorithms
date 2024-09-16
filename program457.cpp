// Generic  singly linear LinlList 


#include<iostream>
using namespace std;


template <class T>
struct nodeSL
{
    T data;
    struct nodeSL *next;
};


template <class T>
class SinglyLL
{
    public:

        struct nodeSL<T>* First;
        int iCount;

        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No , int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        
};

template <class T>
SinglyLL <T>:: SinglyLL()
{
    cout<<"inside constructor\n";
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL <T> :: Display()
{
    struct nodeSL<T>* temp = First;

    while(temp != NULL)
    {
        cout <<"| "<<temp -> data<<"|->";

        temp = temp -> next;

    }
    cout<<"NULL\n";

}

template <class T>
int SinglyLL <T> :: Count()
{

    return iCount;

}

template <class T>
void SinglyLL <T> :: InsertFirst(T No)
{
    struct nodeSL<T>* newn = NULL;

    newn = new nodeSL<T>;    // in C malloc use

    newn -> data = No;
    newn -> next = NULL;

    if (First == NULL)      // if (iCount == 0) lihu shakto
    {
        First = newn;
    }

    else
    {
        newn -> next = First;
        First = newn;
    }
    iCount++;


}

template <class T>
void SinglyLL <T> :: InsertLast(T No)
{
    struct nodeSL<T>* newn = NULL;
    struct nodeSL<T>* temp = First;

    newn = new nodeSL<T>;    // in C malloc use

    newn -> data = No;
    newn -> next = NULL;

    if (First == NULL)      // if (iCount == 0) lihu shakto
    {
        First = newn;
    }

    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        
    }
    iCount++;


}

template <class T>
void SinglyLL <T>:: InsertAtPos(T No ,int iPos)
{
    struct nodeSL<T>* newn = NULL;

    int i = 0;

    struct nodeSL<T>* temp;

    if ((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invaild Position\n";

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

        newn = new nodeSL<T>;
        newn -> data = No;
        newn -> next = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;

        temp -> next = newn;

        iCount++;
    }

}

template <class T>
void SinglyLL <T> :: DeleteFirst()
{
    struct nodeSL<T>* temp = NULL;

    if(First == NULL)
    {
        cout<<"ll is empty\n";

        return;
    }

    else if (First -> next == NULL)
    {
        delete First;

        First = NULL;
    }

    else
    {
        First = First -> next;

        delete temp;
    }
    iCount--;

}

template <class T>
void SinglyLL <T> :: DeleteLast()
{
    struct nodeSL<T>* temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";

        return;
    }

    else if (First -> next == NULL)
    {
        delete First;

        First = NULL;
    }

    else
    {
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete temp -> next;

        temp -> next = NULL;
    }
    iCount--;

}

template <class T>
void SinglyLL <T> :: DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeSL<T>* temp1 = NULL;
    struct nodeSL<T>* temp2 = NULL;

    if ((iPos < 1) || (iPos > iCount))
    {
        cout<<"invalid position\n";

        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }

    else if (iPos == iCount)
    {
        DeleteLast();
    }

    else
    {
        temp1 = First;

        for (i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1 -> next;

        temp1 -> next = temp2 -> next;

        delete temp2;

        iCount--;
    }


}

int main()
{
    // LinkList of INTEGER
    cout<<"----------LinKList OF Integer----------";

    SinglyLL <int> *iobj = new SinglyLL<int>();
    int iRet = 0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"number of elements are "<<iRet<<endl;


    iobj->InsertLast(101);
    iobj->InsertLast(121);
    iobj->InsertLast(151);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"number of elements are "<<iRet<<endl;


    iobj->InsertAtPos(105 , 5);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"number of elements are "<<iRet<<endl;


    iobj->DeleteAtPos(5);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"number of elements are "<<iRet<<endl;



    // LinkList of CHARACTOR
    cout<<"----------LinkList of Charactor----------";

    SinglyLL <char> *cobj = new SinglyLL<char>();
  

    cobj->InsertFirst('A');
    cobj->InsertFirst('B');
    cobj->InsertFirst('C');

    cobj->Display();
    iRet = cobj->Count();
    cout<<"number of elements are "<<iRet<<endl;


    cobj->InsertLast('D');
    cobj->InsertLast('E');
    cobj->InsertLast('F');

    cobj->Display();
    iRet = cobj->Count();
    cout<<"number of elements are "<<iRet<<endl;


    cobj->InsertAtPos('G',5);

    cobj->Display();
    iRet = cobj->Count();
    cout<<"number of elements are "<<iRet<<endl;


    cobj->DeleteAtPos('E');

    cobj->Display();
    iRet = cobj->Count();
    cout<<"number of elements are "<<iRet<<endl;




    // LinkList of DOUBLE
    cout<<"----------LinkList of Double----------";

    SinglyLL <double> *dobj = new SinglyLL<double>();


    dobj->InsertFirst(51.145);
    dobj->InsertFirst(21.1212);
    dobj->InsertFirst(11.454);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"number of elements are "<<iRet<<endl;


    dobj->InsertLast(101.232);
    dobj->InsertLast(121.121);
    dobj->InsertLast(151.343);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"number of elements are "<<iRet<<endl;


    dobj->InsertAtPos(105.5656 , 5);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"number of elements are "<<iRet<<endl;


    dobj->DeleteAtPos(5);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"number of elements are "<<iRet<<endl;




    // LinkList of FLOAT
    cout<<"----------LinkList of Float----------";

    SinglyLL <float> *fobj = new SinglyLL <float>();

    fobj->InsertFirst(90.78f);
    fobj->InsertFirst(78.99f);
    fobj->InsertFirst(69.99f);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"number of elements are "<<iRet<<endl;


    fobj->InsertLast(45.67f);
    fobj->InsertLast(54.78f);
    fobj->InsertLast(77.89f);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"number of elements are "<<iRet<<endl;


    fobj->InsertAtPos(88.56 ,5);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"number of elements are "<<iRet<<endl;


    fobj->DeleteAtPos(5);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"number of elements are "<<iRet<<endl;









    return 0;
}
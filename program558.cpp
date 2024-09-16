#include<iostream>
using namespace std;

template <class T>

class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int Value);
        ~ArrayX();
        void Accept();
        void Display();

        bool LinearSearch(T Value);
        bool BiDirectionalSearch(T Value);
        bool BinarySearch (T Value);

        void BubbleSort();
        
};

template <class T>
ArrayX <T> :: ArrayX(int Value)
{
    this -> iSize = Value;
    this -> Arr = new int [iSize];
}

template <class T>
ArrayX <T> :: ~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX <T> :: Accept()
{
    int i = 0;

    cout<<"Enter the elements :\n";

    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX <T> :: Display()
{
    int i = 0;

    cout<<"entered elements are :\n";

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

template <class T>
bool ArrayX <T> :: LinearSearch(T Value)
{
    bool flag = false;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == Value)
        {
            flag = true;
            break;
        }
    }

    return flag;
}

template <class T>
bool ArrayX <T> :: BiDirectionalSearch(T Value)   // for loop
{
    int iStart = 0;
    int iEnd = iSize - 1;
    bool flag = false;

    for(iStart = 0 , iEnd = iSize -1; iStart <= iEnd; iStart++ , iEnd--)
    {
        if (Arr[iStart] == Value || Arr[iEnd] == Value)
        {
            flag = true;
            break;
        }
    }

    return flag;
}

template <class T>
bool ArrayX <T> :: BinarySearch(T Value) // input detana kayam increasing order madge dyav lagan 
{
    int iStart = 0;
    int iEnd = 0;
    int iMid = 0;

    bool flag = 0;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart)  / 2);

        if(Arr[iMid] == Value  ||  Arr[iStart] == Value  ||  Arr[iEnd] == Value)
        {
            flag = true;
            break;
        }

        else if(Value < Arr[iMid])
        {
            iStart = iMid + 1;
        }

        else if(Value > Arr[iMid])
        {
            iEnd = iMid - 1;
        }
    }
    return flag;
}

template <class T>
void ArrayX <T> :: BubbleSort()
{
    T temp;
    int i = 0;
    int j = 0;


    for(i = 0; i < iSize; i++)
    {
        for(j = 0; j < iSize - 1; j++)
        {
            if(Arr[j]  > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
}



int main()
{
    int iLength = 0 , No = 0;
    bool bRet = false;


    cout<<"Enter the number of element :\n";
    cin>>iLength;

    ArrayX <int> *aobj = new ArrayX <int> (iLength);

    aobj->Accept();

    cout<<"Data before Sorting : \n";

    aobj -> Display();

    aobj -> BubbleSort();

    cout<<"Data after sorting : \n";
    aobj -> Display();

    delete aobj;



    return 0;
}
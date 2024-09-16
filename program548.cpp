#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int Value);
        ~ArrayX();
        void Accept();
        void Display();
        
};

ArrayX :: ArrayX(int Value)
{
    this -> iSize = #include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int Value);
        ~ArrayX();
        void Accept();
        void Display();
        
};

ArrayX :: ArrayX(int Value)
{
    this -> iSize = value;
    this -> Arr = new int [iSize];
}

ArrayX :: ~ArrayX()
{
    delete []Arr;
}

void ArrayX :: Accept()
{
    int i = 0;

    cout<<"Enter the elements :\n";

    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

void ArrayX <T> :: Display()
{
    int i = 0;

    cout<<"entered elements are :\n";

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}



int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;

    cout<<"Enter the number of element :\n";
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);

    aobj->Accept();
    aobj->Display();



    delete aobj;



    return 0;
}alue;
    this -> Arr = new int [iSize];
}

ArrayX :: ~ArrayX()
{
    delete []Arr;
}

void ArrayX :: Accept()
{
    int i = 0;

    cout<<"Enter the elements :\n";

    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

void Display()
{
    int i = 0;

    cout<<"entered elements are :\n";

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}



int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;

    cout<<"Enter the number of element :\n";
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);

    aobj->Accept();
    aobj->Display();



    delete aobj;



    return 0;
}
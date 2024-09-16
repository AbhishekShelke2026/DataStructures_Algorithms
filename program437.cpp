#include<iostream>
using namespace std;

template <class T>

T Minimum(T Arr[] , int iSize)
{
    T Min = Arr[0];
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    return Min;
}

int main()
{
    int iLength = 0;
    float *ptr = NULL;
    int i = 0;
    float iRet = 0.0f;

    cout<<"enter no of elements :\n";
    cin>>iLength;

    ptr = new float [iLength];

    cout<<"enter the element :\n";

    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }

    iRet = Minimum(ptr , iLength);
    cout<<"Minimun element is :"<<iRet<<"\n";

    delete []ptr;

    return 0;
}
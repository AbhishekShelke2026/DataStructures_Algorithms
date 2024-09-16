#include<iostream>
using namespace std;

int Addition(int Arr[] , int iSize)
{
    int iSum = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0;
    int iRet = 0;

    cout<<"enter no of elements :\n";
    cin>>iLength;

    ptr = new int [iLength];

    cout<<"enter the element :\n";

    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }

    iRet = Addition(ptr , iLength);
    cout<<"Addition is :"<<iRet<<"\n";

    delete []ptr;

    return 0;
}
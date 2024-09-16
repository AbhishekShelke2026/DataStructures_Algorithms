#include<iostream>
using namespace std;

float Maximum(float Arr[] , int iSize)
{
    float Max = Arr[0];
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
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

    iRet = Maximum(ptr , iLength);
    cout<<"Maximum element is :"<<iRet<<"\n";

    delete []ptr;

    return 0;
}
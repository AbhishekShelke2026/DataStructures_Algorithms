#include<iostream>
using namespace std;

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0;

    cout<<"enter no of elements :\n";
    cin>>iLength;

    ptr = new int [iLength];

    cout<<"enter the element :\n";

    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Entered element are :\n";

    for (i = 0; i < iLength; i++)
    {
        cout<<ptr[i]<<"\n";
    }

    delete []ptr;

    return 0;
}
#include<iostream>
using namespace std;

template <class T>

T Addition(T No1 , T No2)
{
    T Ans;

    Ans = No1 + No2;
    
    return Ans;
}

int main()
{
    int iValue1 = 10.78;
    int iValue2 = 11.07;
    int iRet = 0.0;

    float fValue1 = 10.78f;
    float fValue2 = 11.07f;
    float fRet = 0.0f;

    double dValue1 = 10.78;
    double dValue2 = 11.07;
    double dRet = 0.0;

    iRet = Addition(iValue1 , iValue2);
    cout<<"Addition of INT :"<<iRet<<"\n";

    fRet = Addition(fValue1 , fValue2);
    cout<<"Addition of float :"<<fRet<<"\n";  

    dRet = Addition(dValue1 , dValue2);
    cout<<"Addition of DOUBLE :"<<dRet<<"\n"; 


    return 0;
}
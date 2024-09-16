#include<iostream>
using namespace std;

void Swap(char &A , char &B)
{
    char Temp;
    Temp = A;
    A = B;
    B = Temp;
}

int main()
{
    char Value1 = 'A';
    char Value2 = 'M';

    cout<<"Value of valur1 variable :"<<Value1<<"\n";
    cout<<"Value of valur2 variable :"<<Value2<<"\n";

    Swap(Value1 , Value2);

    cout<<"Value of value1 after swapping is : "<<Value1<<"\n";
    cout<<"Value of value2 after swapping is : "<<Value2<<"\n";


    return 0;
}
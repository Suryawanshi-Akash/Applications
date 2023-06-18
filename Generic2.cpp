#include<iostream>
using namespace std;

template<class T>               //Template Header
T Addition(T i, T j)            // T - Template Argument
{
    T Result = 0;
    Result = i + j;
    return Result;
}

int main()
{
    int i;
    float f;
    double d;

    i = Addition(10,11);
    cout<< i<<"\n";
    f = Addition(10.6f,89.4f);
    cout<<f<<"\n";
    d = Addition(10.8,70.8);
    cout<<d<<"\n";

    return 0;

}
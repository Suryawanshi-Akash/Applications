#include<iostream>
using namespace std;

int Addition(int i, int j)
{
    int Result = 0;
    Result = i + j;
    return Result;
}

float AdditionF(float i, float j)
{
    float Result = 0;
    Result = i + j;
    return Result;
}

double AdditionD(double i, double j)
{
    double Result = 0;
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
    f = AdditionF(10.6f,89.4f);
    cout<<f<<"\n";
    d = AdditionD(10.8,70.8);
    cout<<d<<"\n";

    return 0;

}
#include<iostream>
using namespace std;

void Display(int iRow, int iCol)
{
    int i= 0;
    int j= 0;

    for(i=1; i<=4; i++)
    {
        for(j= 1;j<=4;j++)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
}
 

int main()
{
    int iNo1 = 0, iNo2 = 0;

    cout<<"Enter the number of Rows :"<<"\n";
    cin>>iNo1;

    cout<<"Enter the number of Rows :"<<"\n";
    cin>>iNo2;

    Display(iNo1,iNo2);


    return 0;
}
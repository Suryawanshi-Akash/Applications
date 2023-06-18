#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements :"<<"\n";
            int iCnt  = 0;

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            cout<<"Display the elements :"<<"\n";
            int iCnt  = 0;

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }
            
    


};
 

int main()
{
    int iNo = 0;

    cout<<"Enter number of Elements "<<"\n";
    cin>>iNo;

    Array aobj(iNo);

    aobj.Accept();

    aobj.Display();

    
    return 0;
}
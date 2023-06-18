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
            cout<<"Memory Allocated" << "\n";
        }

        ~Array()
        {
            delete []Arr;
            cout<<"Memory Deallocated"<<"\n";
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
        int Summation()
        {
            int iSum = 0;
            int iCnt = 0;

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
            
    


};
 

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter number of Elements "<<"\n";
    cin>>iNo;

    Array aobj(iNo);

    aobj.Accept();

    aobj.Display();

    iRet = aobj.Summation();

    cout<<"Summation is : "<<iRet<<"\n";

    
    return 0;
}
#include<iostream>
using namespace std;

template<class T>
class MarvellousArray
{
    private:
        T *Arr;
        int iSize;
    
    public :
        MarvellousArray(int Length)
        {
            cout<<"inside constructor"<<endl;

            iSize = Length;
            Arr = new T[iSize];
        }

        ~MarvellousArray()
        {
           cout<<"inside destructor"<<endl; 

           delete[]Arr;
        }

        void Accept()
        {
            cout<<"Enter the values"<<endl;

            for(int i = 0; i< iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            cout<<"Elements of array are"<<endl;

            for(int i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }

        T Addition()
        {
            T iSum = 0;
            for(int i = 0; i < iSize ; i++ )
            {
                iSum = iSum + Arr[i];
            }
            return iSum;
        }

};

int main()
{
    MarvellousArray<int> mobj1 (6);
    MarvellousArray<float> mobj2 (4);

    mobj1.Accept();
    mobj1.Display();

    mobj2.Accept();
    mobj2.Display();

    int iRet = 0;
    iRet = mobj1.Addition();
    cout<<"The adddition of mobj1 is :"<< iRet<<"\n";

    float fRet = 0;
    fRet = mobj2.Addition();
    cout<<"The adddition of mobj2 is :"<< fRet <<"\n";

    return 0;
}
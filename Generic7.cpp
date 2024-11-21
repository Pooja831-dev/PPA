#include <iostream>
using namespace std;

template <class T>
class Array
{
    public:
       T *Arr;
       int Size;

       Array(int no)
       {
          Size = no;
          Arr = new intT(Size);
       }
       ~Array()
       {
           delete []Arr;
       }
       void Accept()
       {
          cout<<"Enter the Elements:\n";
          int iCnt = 0;
          for(iCnt = 0; iCnt < Size; iCnt++)
          {
            cin>>Arr[iCnt];
          }
       }
       void Display()
       {
         cout<<"Elements of the array are :\n";
         int iCnt = 0;
         for(iCnt = 0; iCnt < Size; iCnt++)
         {
            cout<<Arr[iCnt]<<"\n";
         }
       }

       int main()
       {
           Array<int>aobj1(5);
           aobj1.Accept();
           aobj1.Display();

           Array<char>aobj2(5);
           aobj2.Accept();
           aobj2.Display();

          return 0;
       }
}
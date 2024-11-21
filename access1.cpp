#include <iostream>
using namespace std;

class demo
{
    public:
      int A;
    private:
       int B;
    public:
        demo()
        {
              A=11;
              B=21;
        }
        void fun()
        {
             cout<<"Value of A :"<<A<<"\n";
             cout<<"Value of B :"<<B<<"\n";
        }

};
int main()
{
     demo obj;
     obj.fun();
     cout<<"Value of A :"<<obj.A<<"\n";
     cout<<"Value of B :"<<obj.B<<"\n";
     
    return 0;
}
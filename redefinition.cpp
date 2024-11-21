#include <iostream>
using namespace std;

class base
{
    public:
        void fun()         //definition
        {
              cout<<"Inside Base Fun\n";
        }
};

class derived : public base
{
    public:
       void fun()            //redefination
       {
         cout<<"inside Derived Fun\n";
       }
};
int main()
{
    cout<<sizeof(base)<<"\n";       //1 byte
    base bobj;
    derived dobj;

    bobj.fun();
    dobj.fun();
 
    return 0;
}
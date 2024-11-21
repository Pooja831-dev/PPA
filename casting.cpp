#include <iostream>
using namespace std;

class base
{
    public:
        int i,j;
        void fun()         //definition
        {
              cout<<"Inside Base Fun\n";
        }
};

class derived : public base
{
    public:
       int x,y;
       void fun()            //redefination
       {
         cout<<"inside Derived Fun\n";
       }
};

int main()
{
    base bobj;
    derived dobj;

    bobj.i=11;

    base *bptr = NULL;
    derived *dptr = NULL;

    bptr = &bobj;       //Nocasting
    dptr = &dobj;       //Nocasting

    bptr = &dobj;       //Upcasting

    //dptr = &bobj;       //Downcasting
 
    return 0;
}
#include <iostream>
using namespace std;

class base
{
    public:
        int i,j;
        void fun()         
        {
              cout<<"Inside Base Fun\n";
        }
        void gun()
        {
             cout<<"inside Base Gun\n";
        }
         void sun()
        {
             cout<<"inside Base Sun\n";
        }
         void run()
        {
             cout<<"inside Base Run\n";
        }
};     

class derived : public base
{
    public:
       int x,y;
       void fun()           
       {
         cout<<"inside Derived Fun\n";
       }
        void gun()
        {
             cout<<"inside Derived Gun\n";
        }
        void sun()
        {
             cout<<"inside Derived Sun\n";
        }
         void mun()
        {
             cout<<"inside Derived Mun\n";
        }
};

int main()
{

    derived dobj;
    base *bptr = NULL;
    
    bptr = &dobj;  

    bptr->fun();     //base fun
    bptr->gun();     //base gun
    bptr->sun();     //base sun
    bptr->run();     //base run
    //bptr->mun();     //error
 
    return 0;
}
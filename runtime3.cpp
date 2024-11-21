#include <iostream>
using namespace std;

class base
{
    public:
        int i,j;
        virtual void fun()    //1000      
        {
              cout<<"Inside Base Fun\n";
        }
        void gun()             //2000
        {
             cout<<"inside Base Gun\n";
        }
        virtual void sun()     //3000
        {
             cout<<"inside Base Sun\n";
        }
        virtual void run()      //4000
        {
             cout<<"inside Base Run\n";
        }
};     

class derived : public base
{
    public:
       int x,y;
       virtual void fun()      //5000       
       {
         cout<<"inside Derived Fun\n";
       }
        void gun()             //6000
        {
             cout<<"inside Derived Gun\n";
        }
        virtual void mun()     //7000
        {
             cout<<"inside Derived Mun\n";
        }
         void run()             //8000
        {
             cout<<"inside Derived Run\n";
        }

};

int main()
{
    cout<<"size of base class :"<<sizeof(base)<<"\n";
    cout<<"size of derived class :"<<sizeof(derived)<<"\n";
    derived dobj;
    base *bptr = NULL;
    
    bptr = &dobj;  

    bptr->fun();     //der fun
    bptr->gun();     //base gun
    bptr->sun();     //base sun
    bptr->run();     //der run
    //bptr->mun();     //error
 
    return 0;
}
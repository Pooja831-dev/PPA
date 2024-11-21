#include <iostream>
using namespace std;

class base
{
    public:
      int i,j;

       base()
       {
           cout<<"Inside base constructor\n";
           i=10;
           j=20;
       }

         ~base()
       {
           cout<<"Inside base destructor\n";
       }
       void fun()
       {
           cout<<"Inside base fun\n";
       }
};

class derived : public base
{
     public:
       int x,y;

       derived()
       {
           cout<<"Inside derived constructor\n";
           x=30;
           y=40;
       }

         ~derived()
       {
           cout<<"Inside derived destructor\n";
       } 
       void gun()
       {
           cout<<"Inside derived gun\n";
       }

};

class derivedX : public derived

{
     public:
       int a,b;
       derivedX()
       {
          cout<<"Inside DerivedX constructor\n";
          a=50;
          b-69;
       }
    ~derivedX()
    {
         cout<<"Inside DerivedX destructor\n";
    }
    void sun()
    {
        cout<<"Inside DerivedX sun\n";
    }
};
int main()
{
     
     derivedX dobj;
     //constructors : base -> derived ->derivedX

     cout<<"Inside main function\n";

     cout<<"Size of Base class:"<<sizeof(base)<<"\n";           
     cout<<"Size of derived class:"<<sizeof(derived)<<"\n";       
     cout<<"Size of derivedX class:"<<sizeof(derivedX)<<"\n";

     cout<<dobj.i<<"\n";
     cout<<dobj.j<<"\n";
     cout<<dobj.x<<"\n";
     cout<<dobj.y<<"\n";
     cout<<dobj.a<<"\n";
     cout<<dobj.b<<"\n";
    
    dobj.fun();
    dobj.gun();
    dobj.sun();

    //destructors : derivedX -> derived -> base
    return 0;
}
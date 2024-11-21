#include <iostream>
using namespace std;

class demo
{
    public:
    int a;
    int b;

      void fun()
      {
             cout<<"Inside fun\n";
      }

      void gun()
      {
              cout<<"Inside Gun\n";
      }
};

int main()
{

    demo obj;

    cout<<sizeof(obj)<<"\n";
   
   obj.a=11;
   obj.b=21;

   obj.fun();
   obj.gun();

   cout<<obj.a<<"\n";
   
   cout<<obj.b<<"\n";

    return 0;
}
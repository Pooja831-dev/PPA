#include <iostream>
using namespace std;

class demo
{
    public:
       int No1, No2;

       demo(int A, int B)
       {
           No1=A;
           No2=B;
       }

        //void display(demo *this, int x)
       void display(int x)
       {
         cout<<"value of No1 : "<<this->No1<<"\n";
         cout<<"value of No2 : "<<this->No2<<"\n";
         cout<<"value of x : "<<x<<"\n";
       }

};

int main()
{ 
    demo obj(11,21);    
    obj.display(51);     //display(&obj,51);    display(100,51);
 
    demo objnew(10,20);
    obj.display(30);

    return 0;

}
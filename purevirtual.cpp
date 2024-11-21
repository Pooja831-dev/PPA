#include <iostream>
using namespace std;

class base
{
    public:
       int A,B;
    
       //1000
       int Addition(int No1, int No2)           //Concrete Method
       {
          return No1 + No2;
       }

       private:           
       virtual int Subtraction(int No1, int No2)=0;         //Abstact Method
};

class derived : public base
{
    public:
       int X,Y;
      
       //2000
       int Multiplication(int No1, int No2)       //Concrete Method
       {
          return No1 * No2;
       }

       //3000
       int Subtraction(int No1, int No2)         //Concrete Method
       {
           return No1-No2;
       }
};

int main()
{
    //base bobj;
    derived dobj;

    cout<<"Addtion is :"<<dobj.Addition(10,11)<<"\n";
    cout<<"Subtraction is :"<<dobj.Subtraction(10,11)<<"\n";
    cout<<"Multiplication is :"<<dobj.Multiplication(10,11)<<"\n";
    
    cout<<"Size of Base Object :"<<sizeof(base)<<"\n";
    cout<<"Size of Derived Object :"<<sizeof(derived)<<"\n";

    return 0;
}
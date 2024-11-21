#include <iostream>
using namespace std;

class Arithematic
{
    public:
       int no1;
       int no2;

       Arithematic(int A,int B)
       {
            no1=A;
            no2=B;
       }

       int Addition()
       {
        int ans=0;
        ans=no1+no2;
        return ans;
       }

       int Subtraction()
       {
        int ans=0;
        ans=no1-no2;
        return ans;
       }
};

int main()
{
    int value1=0,value2=0,ret=0;

    cout<<"Enter First Number :\n";
    cin>>value1;

    cout<<"Enter Second Number :\n";
    cin>>value2;

    Arithematic obj(value1,value2);

     ret=obj.Addition();
     cout<<"Addition is :"<<ret<<"\n";

     
     ret=obj.Subtraction();
     cout<<"Subtraction is :"<<ret<<"\n";
    return 0;
}
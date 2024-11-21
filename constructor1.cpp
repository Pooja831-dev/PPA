#include <iostream>
using namespace std;

class marvellous
{
    public:
        int no1;
        int no2;

        marvellous()
        {

            cout<<"Inside default Constructor\n";
            no1=0;
            no2=0;
        }

          
        marvellous(int a,int b)
        {
            cout<<"Inside parametrised constructor\n";
            no1=a;
            no2=b;
        }
        ~marvellous()
        {
            cout<<"Inside Destructor\n";
        }
        
        void fun()
        {
            cout<<"Inside Fun\n";
        }


};
int main()
{

    marvellous mobj1();
    marvellous mobj2(11,21);
    marvellous obj;
    obj.fun();

    return 0;
}
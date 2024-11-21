#include <iostream>
using namespace std;

class marvellous
{
    public:
        int no1;
        int no2;

        marvellous()
        {

            cout<<"Inside default constructure\n";
            no1=0;
            no2=0;
        }

        marvellous(int a,int b)
        {
            cout<<"Inside parameterrised constructure\n";
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
     mobj.fun();
    return 0;
}
#include <iostream>
using namespace std;

float Addition(float No1, float No2)
{
    float Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    float A = 10.7, B = 11.7;

    cout<<Addition(A,B)<<"\n";

    return 0;
}

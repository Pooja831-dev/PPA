#include <iostream>
using namespace std;

template <class T>
 T Addition( T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    float A = 10.7f, B = 11.8f;
    cout<<Addition(A,B)<<"\n";

    int X = 10, Y = 11;
    cout<<Addition(X,Y)<<"\n";

    double P = 10.90f, Q = 11.98f;
    cout<<Addition(P,Q)<<"\n";

    return 0;
}

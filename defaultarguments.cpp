#include <iostream>
using namespace std;

float CalculatedArea(float Rad, float PI = 3.14)
{
    float Ans=0.0f;
    Ans =PI * Rad * Rad;
    return Ans;
}
int main()
{
    float Ret = 0.0f;
        
    Ret = CalculatedArea(10.5f);
    cout<<"Area of Circle :"<<Ret<<"\n"; 
    
    Ret = CalculatedArea(10.5f,7.20f);
    cout<<"Area of Circle :"<<Ret<<"\n";
    return 0;
}
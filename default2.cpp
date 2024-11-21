#include<iostream>
using namespace std;

void display(int A =10, int B=20, int C=30)
{
    cout<<A<<"\t"<<B<<"\t"<<C<<"\n";

}
int main()
{
   display();
   display(11);
   display(11,21);
   display(11,21,51);

   return 0;
    
}
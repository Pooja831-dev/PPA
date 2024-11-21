#include <iostream>
using namespace std;

class demo
{
     public:
        int Addition(int A, int B)
        {
            return A+B;
        }
        double Addition(double A, double B)
        {
            return A+B;
        }
        int Addition(int A, int B, int C)
        {
            return A+B+C;
        }
};

int main()
{
    demo obj;
    cout<<obj.Addition(10,11)<<"\n";
    cout<<obj.Addition(10.90,11.99)<<"\n";
    cout<<obj.Addition(10,11,20)<<"\n";

    return 0;
}

/*
  void fun(int A,int B);              fun@2ii
  void fun(int A, int B, int c);      fun@3iii

  void fun(int A,int B);               fun@2ii
  void fun(float A, float B);          fun@2ff

  void fun(int A, int B, double C);      fun@3ifd
  void fun(double A, float B, int C);     fun@3dfi

  void fun(int A, int B);
  int fun(int A, int B);



*/
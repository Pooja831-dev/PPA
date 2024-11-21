#include <stdio.h>

struct demo
{
    int no;
    float f;
};

struct PPA
{
    int x;
    struct demo dobj;
    int y;
};

int main()
{
    struct PPA obj;
    obj.x=10;
    obj.y=20;
    obj.dobj.no=11;
    obj.dobj.f=3.14;


    printf("%d\n",obj.x);




    return 0;
}
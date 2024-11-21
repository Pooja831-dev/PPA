#include <stdio.h>

#pragma pack(1)
struct demo
{
   int i;
   float f;
   char ch;
   double d;

};

int main()
{
    struct demo obj;

    printf("Size of structure is: %d\n",sizeof(obj));

    return 0;
}
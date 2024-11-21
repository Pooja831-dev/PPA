#include <stdio.h>

struct demo
{
   int no;
   float f;
   double d;
   int i;
};

int main()
{
     struct demo obj;
     struct demo*ptr = &obj;
     
     ptr->no = 11;
     ptr->f = 3.10;
     ptr->d = 90.9999;
     ptr->i = 21;

     printf("%d\n",ptr->no);

     return 0;
}
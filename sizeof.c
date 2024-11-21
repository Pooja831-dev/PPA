#include <stdio.h>
int main()
{
    char ch='P';
    int no=11;
    float f=78.66;
    double d=90.78900;
     
     printf("%d\n",sizeof(ch));   //1
     printf("%d\n",sizeof(no));    //4
     printf("%d\n",sizeof(f));      //4
     printf("%d\n",sizeof(d));      //8



  return 0;  
}
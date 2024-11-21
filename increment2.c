#include <stdio.h>
int main()
{
    int a=10,b=10;
    int no1=0,no2=0;
    no1=a++;
    printf("Value of no1=%d\n",no1);
    printf("Value of a=%d\n",a);

    no2=++b;
    printf("Value of no2=%d\n",no2);
    printf("Value of b=%d\n",b);



       return 0;
}
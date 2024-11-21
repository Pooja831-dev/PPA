#include <stdio.h>
int main()
{
    
    int no=21;
    int *p=&no;
    int **q=&p;
    int ***x=&q;
    int ****y=&x;
    int *****z=&y;
    int ***a=&q;
    int ****b=&a;

printf("%d\n",no);

printf("%d\n",&no);
printf("%d\n",*p);
printf("%d\n",**q);
printf("%d\n",****x);
printf("%d\n",&p);




    return 0;
}
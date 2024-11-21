#include <stdio.h>
int main()

{
    char c='M';
    int i=11;
    float f=3.14;
    double d=3.9987;

     char *cptr=&c;
     int *iptr=&i;
     float *fptr=&f;
     double *dptr=&d; 

     printf("%d\n",i);
     printf("%c\n",c);
     printf("%f\n",f);
     printf("%lf\n",d);

     printf("%d\n",&i);
     printf("%d\n",&f);
     printf("%d\n",&d);
     printf("%d\n",&c);

     printf("%d\n",sizeof(i));
     printf("%d\n",sizeof(f));
     printf("%d\n",sizeof(d));
     printf("%d\n",sizeof(c));

     printf("%d\n",iptr);
      printf("%d\n",cptr);
     printf("%d\n",fptr);
     printf("%d\n",dptr);

      printf("%d\n",*iptr);
       printf("%lf\n",*dptr);
        printf("%f\n",*fptr);
         printf("%c\n",*cptr);

          printf("%d\n",sizeof(iptr));
          printf("%d\n",sizeof(cptr));
          printf("%d\n",sizeof(dptr));
          printf("%d\n",sizeof(fptr));
          return 0;
}
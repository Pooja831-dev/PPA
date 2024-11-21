#include <stdio.h>

int main()
{
   
   int no=0;
   int result=0;

   printf("Enter Number : \n");
   scanf("%d",&no);

   result=no%2;

   if(result==0)
   {
      printf("It is even number\n");
   }
   else
   {
    printf("It is odd number\n");
   }
    return 0;
}
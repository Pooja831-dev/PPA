#include<stdio.h>
int addition(int no1, int no2)
{
    int ans=0;
    ans=no1+no2;
    return ans;
}

int subtraction(int no1, int no2)
{
    int ans=0;
    ans=no1-no2;
    return ans;

}
int main()
{

   int value1=0,value2=0, ret=0;

   printf("Enter First Number : \n"); 
   scanf("%d",&value1);

   printf("Enter Second Number : \n");
   scanf("%d",&value2);

   ret=addition(value1,value2);
   printf("Addition=%d\n",ret);

   ret=subtraction(value1,value2);
   printf("subtraction=%d\n",ret);

    return 0;
}
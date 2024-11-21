#include <stdio.h>

int addition(int value1,int value2)
{
    int result=0;
    result=value1+value2;
    return result;
}
int main()
{
    int no1=0,no2=0,ans=0;
    printf("Enter number first=\n");
    scanf("%d",&no1);
    printf("Enter number two=\n");
    scanf("%d",&no2);
    ans=addition(no1,no2);
    printf("Addition=%d",ans);

    return 0;
}
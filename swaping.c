#include<stdio.h>
int main()
{
    int a,b,temp;
    level:
    printf("Enter the value of a and b=");
    scanf("%d%d",&a,& b);
    printf("Before sawpping\n");
    printf("value of a and b is =%d %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping\n");
    printf("value of a and b is=%d %d\n",a,b);
    goto level;
    return 0;
}

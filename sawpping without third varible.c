#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value a and b =");
    scanf("%d%d",&a,&b);
    printf("Before sawpping\n");
   printf("value of a and b is =%d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After sawpping\n");
    printf("value of a and b is =%d %d\n",a,b);
    return 0;
}

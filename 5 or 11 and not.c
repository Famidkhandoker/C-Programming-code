#include<stdio.h>
int main()
{
    int a;
    level:
    printf("Enter the value of a=");
    scanf("%d",&a);
    if(a%5==0&&a%11==0)
    {
        printf("This number is divisible\n");
    }
    else
    {
        printf("This number is not divisible\n");
    }
    goto level;
    return 0;
}

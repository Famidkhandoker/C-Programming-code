#include<stdio.h>
int main()
{
    int a;
    level:
    printf("Enter the value of number=");
    scanf("%d",&a);
    if(a>0)
    {
        printf("This number is positive\n");
    }
    else if(a==0)
    {
        printf("This number is zero\n");
    }
    else
    {
        printf("This number is negative\n");
    }
    goto level;
    return 0;
}


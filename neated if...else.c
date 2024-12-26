#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the value of num1,num2 and num3=");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("The maximum number is num1");
        }
        else
        {
            printf("The maximum number is num3");
        }
    }
    else
    {
        if(num2>num3)
        {
            printf("The maximum number is num2");
        }
        else
        {
            printf("The maximum number is num3");
        }
    }
    return 0;
}


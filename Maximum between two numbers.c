#include<stdio.h>
int main()
{
    int Num1,Num2;
    level:
    printf("Enter the value of Two Number=");
    scanf("%d%d",&Num1,&Num2);
    if(Num1>Num2)
    {
        printf("This Number 1 is Maximum\n");
    }
    else
    {
        printf("This Number 2 is  Maximum\n");
    }
    goto level;
    return 0;
}


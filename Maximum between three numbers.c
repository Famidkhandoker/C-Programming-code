#include<stdio.h>
int main()
{
    int Num1,Num2,Num3;
    level:
    printf("Enter the value of Three Number=");
    scanf("%d%d%d",&Num1,&Num2,&Num3);
    if(Num1>Num2&&Num1>Num3)
    {
        printf("This Number 1 is Maximum\n");
    }
    else if(Num2>Num1&&Num2>Num3)
    {
        printf("This Number 2 is Maximum\n");
    }
    else
    {
        printf("This Number 3 is  Maximum\n");
    }
    goto level;
    return 0;
}


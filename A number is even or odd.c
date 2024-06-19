#include<stdio.h>
int main()
{
    int N;
    level:
    printf("Enter the value of number=");
    scanf("%d",&N);
    if(N%2==0)
    {
        printf("This number is even\n");
    }
    else
    {
        printf("This number is odd\n");
    }
    goto level;
    return 0;
}


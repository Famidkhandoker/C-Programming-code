#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the value=");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("%d\n",count);
    return 0;
}


#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter the value=");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
     printf("%d",sum);
    return 0;
}



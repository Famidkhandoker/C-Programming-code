#include<stdio.h>
int main()
{
    int m,n,a,i,sum=0;
    printf("Enter the value of number=");
    scanf("%d%d",&m,&n);
    a=n*0.4;
    if(a>m)
    {
        for(i=a;i<=n;i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
            }
        }
            printf("%d",sum);
    }
    else
    {
        for(i=m;i<=n;i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
            }
        }
            printf("%d",sum);
    }
    return 0;
}


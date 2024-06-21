#include<stdio.h.>
int main()
{
    int i,j,n,space;
    printf("Enter the value of numbers=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf(" ");
        }
            for(j=1;j<=(i*2)-1;j++)
            {
              printf("*");
            }
            printf("\n");
    }
    return 0;
}


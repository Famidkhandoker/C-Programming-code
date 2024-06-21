#include<stdio.h>
int main()
{
    int a[3][4],i,j;
    printf("input your matrix...\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
           printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("your matrix result is...\n");
    for(i=0;i<3;i++)
    {

        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

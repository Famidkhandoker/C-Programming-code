#include<stdio.h>
int main()
{
    int row,col,n,k,space;
    printf("Enter the value of alphabet= ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for (space=1;space<=n-row;space++)
        {
             printf(" ");
        }
            for(col=1;col<=2*row-1;col++)
        {
            k=64+col;
            printf("%c",k);
        }
            printf("\n");
    }
            return 0;
}


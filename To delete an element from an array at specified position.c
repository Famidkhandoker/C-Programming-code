#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],i,pos;
    printf("Enter the elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements position to delete:");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("Invaild Position!\n");
    }
    else
    {
        for(i=pos-1;i<n;i++)
        {
            a[i]=a[i+1];
        }
        for(i=0;i<n-1;i++)
        {
            printf("%d\n",a[i]);
        }
    }
        return 0;
    }


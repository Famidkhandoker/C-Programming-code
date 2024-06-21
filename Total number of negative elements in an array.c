#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],i,count=0;
    printf("Enter the elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            count++;
        }
    }
    printf("\n Total negative elements in array =%d",count);
    return 0;
}


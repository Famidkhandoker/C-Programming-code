#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array=");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The negative element is:");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d\t",a[i]);
        }
    }
    return 0;
}


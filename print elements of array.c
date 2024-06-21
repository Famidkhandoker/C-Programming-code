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
    printf("your array result is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}


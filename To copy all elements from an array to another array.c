#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a1[n],a2[n],i;
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++)
    {
        a2[i]=a1[i];
    }
    printf("\n Enter the element of array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a1[i]);
    }
    printf("\n Enter the element copy of array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a2[i]);
    }
    return 0;
}


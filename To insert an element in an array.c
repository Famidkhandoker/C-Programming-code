#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],i,num,pos;
    printf("Enter the elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to insert:");
    scanf("%d",&num);
    printf("Enter the element position:");
    scanf("%d",&pos);
    if(pos>n+1|| pos<=0)
    {
        printf("Invaild Position!");
    }
    else
    {
        for(i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=num;
        n++;
        printf("Array elements after insersion:");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    }
    return 0;
}


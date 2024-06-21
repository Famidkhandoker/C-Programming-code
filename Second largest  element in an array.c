#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array=");
    scanf("%d",&n);
    int a[n],i,max1=0,max2=0;
    printf("Enter the array numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2&&a[i]<max1)
        {
            max1=a[i];
        }
    }
        printf("First largest=%d\n",max1);
        printf("second largest=%d\n",max2);
        return 0;
    }


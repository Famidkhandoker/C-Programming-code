#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array=");
    scanf("%d",&n);
    int a[n],i,max,min;
    printf("Enter the array numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   max=a[0];
   min=a[0];
   for(i=1;i<n;i++)
   {
       if(max<a[i])
       {
           max=a[i];
       }
       if (min>a[i])
       {
           min=a[i];
       }
    }
    printf("The maximum number is=%d\n",max);
    printf("The minimum number is=%d\n",min);
    return 0;
}


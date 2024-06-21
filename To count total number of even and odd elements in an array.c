#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array=");
    scanf("%d",&n);
    int a[n],i,even,odd;
    printf("Enter the array numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    even =0;
    odd=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total even elements:%d\n",even);
    printf("Total odd elements:%d\n",odd);
    return 0;
}


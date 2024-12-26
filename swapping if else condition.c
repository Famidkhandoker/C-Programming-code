#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a and b =");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("Before Swapping\n");
        printf("value of a and b is =%d %d\n",a,b);
        printf("The maximum value is a\n");
        temp=a;
        a=b;
        b=temp;
        printf("After swapping\n");
        printf("value of a and b is =%d %d\n",a,b);
    }
        else
        {
          printf("The maximum value is not a");
        }
        return 0;

}

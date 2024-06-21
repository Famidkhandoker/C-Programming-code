#include<stdio.h>
int main()
{
    char ch,i,n;
    printf("Enter the value of number=");
    scanf("%c",&n);
    for(ch='A';ch<=n;ch++)
    {
        for(i='A';i<=ch;i++)
        {
            printf("%c",ch);
        }
            printf("\n");
    }
            return 0;
}


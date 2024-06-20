#include<stdio.h>
int main()
{
    char ch='a';
    printf("Enter the value=");
    scanf("%c",&ch);
    while(ch<='z')
    {
        printf("%c ",ch);
        ch++;
    }
    return 0;
}


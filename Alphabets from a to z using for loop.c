#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character=");
    scanf("%c",&ch);
    for(ch='a';ch<='z';ch++)
    {
        printf("%c ",ch);
    }
    return 0;
}


#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the any character=");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='z')
    {
        printf("character is an alphabet\n");
    }
    else
    {
        printf("character is not alphabet\n");
    }
    return 0;
}


#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the any character=");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("character is uppercase alphabet\n");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("character is lowercase alphabet\n");

    }
    return 0;
}


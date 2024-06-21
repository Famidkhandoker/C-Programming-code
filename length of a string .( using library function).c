#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("Enter your name:");
    gets(name);
    int length=strlen(name);
    printf("The length is =%d",length);
    return 0;
}

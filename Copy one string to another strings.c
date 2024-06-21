
#include<stdio.h>
int main()
{
    char source[100];
    char target[100];
    int i;
    printf("Enter any string:");
    gets(source);
    for(i=0;source[i]!='\0';i++)
    {
        target[i]=source[i];
    }
    target[i]='\0';
    printf("First string=%s\n",source);
    printf("Second string=%s\n",target);
    return 0;
}

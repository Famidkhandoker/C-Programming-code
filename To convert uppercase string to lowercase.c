#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i;
    printf("Enter the uppercase:");
    gets(str1);
    for(i=0;str1[i]>'\0';i++)
    {
        str1[i]=str1[i]+32;
    }
    puts(str1);
    return 0;
}


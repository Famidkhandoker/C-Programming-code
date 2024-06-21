#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], reverse[100];
    int N;
    printf("Enter any string: ");
    gets(str);
    strcpy(reverse, str);
    strrev(reverse);
    N= strcmp(str, reverse);
    if(N== 0)
    {
        printf("String is Palindrome.");
    }
    else
    {
      printf("String is Not Palindrome.");
    }
   return 0;
}


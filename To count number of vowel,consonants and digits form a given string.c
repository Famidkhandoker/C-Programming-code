#include<stdio.h>
int main()
{
    char str1[100];
    int i,count1=0,count2=0,count3=0;
    printf("Enter the character:");
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>'0'&& str1[i]<='9')
        {
            count1++;
        }
        else if(str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U'||str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
        {
            count2++;
        }
        else
        {
          count3++;
        }
    }
    printf("Vowel=%d\n",count2);
    printf("consonant=%d\n",count3);
    printf("Digit=%d\n",count1);
    return 0;
}


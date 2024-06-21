#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100],str3[100];
int result;
printf("Enter the value of str1=");
gets(str1);
printf("Enter the value of str2=");
gets(str2);
printf("Enter the value of str3=");
gets(str3);
result=strcmp(str1,str2);
printf("Result=%d\n",result);
result=strcmp(str1,str3);
printf("Result=%d\n",result);
return 0;
}


#include<stdio.h>
int main()
{
   int i,count=0;
   char name[100];
   printf("Enter the name:");
   gets(name);
   printf("your name is=");
   puts(name);
   for(i=0;name[i]!='\0';i++)
   {
    count++;
   }
   printf("length=%d",i);
   return 0;
}

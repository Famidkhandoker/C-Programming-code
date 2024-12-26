#include<stdio.h>
int main()
{
    int age;
    printf("Enter the value of age=");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Eligible for voting\n");
    }
    else
    {
        printf("Not Eligible for voting\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int year;
    level:
    printf("Enter the value of year=");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0)
    {
        printf("This year is leap year\n");
    }
    else
    {
        printf("This year is not leap year\n");
    }
    goto level;
    return 0;
}


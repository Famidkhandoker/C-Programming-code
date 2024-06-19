#include<stdio.h>
int main()
{
    int week;
    level:
    printf("Enter the week number=");
    scanf("%d",&week);
    if(week==1)
    {
        printf("saturday\n");
    }

    else if(week==2)
    {
         printf("sunday\n");
    }
    else if(week==3)
    {
        printf("Monday\n");
    }
    else if(week==4)
    {
        printf("Tuesday\n");
    }
    else if(week==5)
    {
        printf("wednesday\n");
    }
    else if(week==6)
    {
        printf("Thursday\n");
    }
    else if(week==7)
    {
        printf("Friday\n");
    }
    else
    {
        printf("This is not week\n");
    }
    goto level;
    return 0;
}


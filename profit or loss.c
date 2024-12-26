#include<stdio.h>
int main()
{
    int Buying_price,Selling_price;
    level:
    printf("Enter the value of Buying_price and Selling_price=\n");
    scanf("%d%d",&Buying_price ,&Selling_price);
    if(Buying_price>Selling_price)
    {
        printf("This Product is loss\n");
    }
    else
    {
        printf("This Product is profit\n");
    }
    goto level;
    return 0;
}

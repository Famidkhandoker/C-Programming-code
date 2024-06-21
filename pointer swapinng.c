#include<stdio.h>
int main()
{
   int num1,num2,temp;
   int *ptr1,*ptr2;
   ptr1=&num1;
   ptr2=&num2;
   printf("Enter the two number:");
   scanf("%d%d",ptr1,ptr2);
    temp = *ptr1;
    num1= *ptr2;
    num2= temp;
    printf("After swapping in swap function n");
    printf("Value of num1 = %d \n", *ptr1);
    printf("Value of num2 = %d \n\n", *ptr2);
    return 0;
}

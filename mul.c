//calculate factorial
#include<stdio.h>
void main()
{
    int a,fact=1;
    printf("enter the number=");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is =%d",a,fact);
}
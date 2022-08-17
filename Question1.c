//1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int  sumnaturalnum(int n)
{

    if (n==1)
    return 1;
    else
    return (n+sumnaturalnum(n-1));

}
int main()
{ int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    printf("The sum of %d natural numbers is %d",x,sumnaturalnum(x));
}

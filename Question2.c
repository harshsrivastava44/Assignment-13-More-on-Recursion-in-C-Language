//2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumOdd(int n)
{
    if (n==1)
    {
       return 1;
    }
    return (2*n-1)+sumOdd(n-1);
    

}
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    printf("The sum of %d Odd numbers is %d",x,sumOdd(x));
}

//8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fib(int n)
{
    if (n==0 || n==1)
    {
       return n;
    }
return fib(n-1) + fib(n-2);

}
int main()
{
    int x=6,i;
printf("Enter a number :\n");
scanf("%d",&x);
    for (i = 0; i<x; i++)
    printf("%d ",fib(i));
    return 0;
}

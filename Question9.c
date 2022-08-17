//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int digitcount(int n)
{
   if (n==0)
       return 0;

return 1+digitcount(n/10);
}
int main()
{ int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
   printf("The digits of given number is %d",digitcount(x));
}

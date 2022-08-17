//6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int n)
{
    if (n==0)
    {
      return 1;
    }
return n*fact(n-1);
    

}
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    printf("The factorial of  %d is %d",x,fact(x));
}
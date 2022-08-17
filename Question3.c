//3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sumEven(int n)
{
    if (n!=0)
    {
      return (2*n)+sumEven(n-1);
    }
    
    

}
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    printf("The sum of %d even numbers is %d",x,sumEven(x));
}
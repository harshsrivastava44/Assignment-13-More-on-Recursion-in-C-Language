//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int Squaresum(int n)
{
    if (n!=0)
    {
      return (n*n)+Squaresum(n-1);
    }
    
    

}
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    printf("The sum of Squares of  %d numbers is %d",x,Squaresum(x));
}
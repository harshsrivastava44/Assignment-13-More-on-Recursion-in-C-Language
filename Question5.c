//5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int Digitsum(int n)
{
    if (n==0)
    {
      return 0;
    }
return (n%10)+Digitsum(n/10);
    

}
int main()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d",&x);
    printf("The sum of the digit  %d is %d",x,Digitsum(x));
}
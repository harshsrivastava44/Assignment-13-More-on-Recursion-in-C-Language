//7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int HCF(int a,int b)
{  if (a%b==0)
        {     return b;
        }
        if(a>b)
            return HCF(a%b,b);
        return HCF(b%a,a);

}
int main()
{
    int x,y;
    printf("Enter two number :\n");
    scanf("%d%d",&x,&y);
    printf("The hcf of  %d and %d is %d",x,y,HCF(x,y));
}

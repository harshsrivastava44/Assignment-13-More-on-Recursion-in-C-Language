//10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int powernum(int a,int b);
int main()
{
    int x,y,r;
    printf("Enter a number and power :\n");
    scanf("%d%d",&x,&y);
           r=powernum(x,y);
        printf("\nRESULT= %d",r);
   return 0;
}
int powernum(int a,int b)
{
    if(b==0)
    return 1;
    else
   return a* powernum(a,b-1);

}

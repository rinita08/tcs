#include<stdio.h>

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int n,f=1,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nFactorial of %d is %d",n,f);
    printf("\nFactorial of %d is %d",n,factorial(n));
    return 0;
}
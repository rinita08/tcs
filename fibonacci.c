#include<stdio.h>

int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
    int n,a=0,b=1,c;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    n=n+1;
    int x=n;
    while(n>0)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    printf("\n");
    for(int i=0;i<x;i++)
    printf("%d ", fib(i));
    return 0;
}

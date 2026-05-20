#include<stdio.h>

int josephus(int n,int k)
{
    if(n==1)
        return 1;
    else
        return (josephus(n-1,k)+k)%n;
}

int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    printf("%d",josephus(n,k)+1);
    return 0;
}
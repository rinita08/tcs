#include<stdio.h>

int main()
{
    int n,cost=0;
    scanf("%d", &n);
    while(n>0)
    {
        if(n%12==0)
        {
            cost =cost+15000;
            n=n-12;
        }
        else if(n%9==0)
        {
            cost =cost+12000;
            n=n-9;
        }
        else if(n%6==0)
        {
            cost =cost+7000;
            n=n-6;
        }
        else if(n%3==0)
        {
            cost =cost+5000;
            n=n-3;
        }
        else
        {
            printf("error");
            return 0;
        }
    }
    printf("%d", cost);
    return 0;
}
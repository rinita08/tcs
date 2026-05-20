#include<stdio.h>
int main()
{
    double a,b;
    printf("Enter two numbers:");
    scanf("%lf%lf",&a,&b);
    if(a>b)
    {
        printf("%lf is greater than %lf",a,b);
    }
    else
    {
        printf("%lf is greater than %lf",b,a);
    }
    return 0;
}
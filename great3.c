#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter 3 numbers:");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("The greatest number is: %lf",a);
    }
    else if(b>a && b>c)
    {
        printf("The greatest number is: %lf",b);
    }
    else
    {
        printf("The greatest number is: %lf",c);
    }
    return 0;
}
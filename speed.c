#include<stdio.h>
int main()
{
    int meter;
    scanf("%d",&meter);
    int sec;
    scanf("%d",&sec);
    double speed=(meter/sec)*(5.0/18.0);
    printf("%lf",speed);
    return 0;
}
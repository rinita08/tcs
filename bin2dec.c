#include <stdio.h>
#include <math.h>

int main()
{
    int n,decimal=0, pos=0,rem;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        rem=n%10;
        decimal=decimal+rem*pow(2,pos);
        n=n/10;
        pos++;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
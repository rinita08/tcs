#include <stdio.h>
#include<math.h>

int todec(int n)
{
    int decimal=0, pos=0,rem;
    while(n!=0)
    {
        rem=n%10;
        decimal=decimal+rem*pow(2,pos);
        n=n/10;
        pos++;
    }
    return decimal;
}

void tobase(int n, int base, int digits[])
{
    int result[32];
    int i = 0;
    while (n > 0) {
        result[i++] = digits[n % base];
        n = n / base;
    }
    while (i > 0) {
        printf("%d", result[--i]);
    }
}

int main()
{
    int n,decimal;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    decimal=todec(n);
    int digits[] = {0, 1, 2, 3, 4, 5, 6, 7};
    printf("Octal equivalent: ");
    tobase(decimal, 8, digits);
    printf("\n");
    return 0;
}
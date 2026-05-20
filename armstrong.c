#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int x=n;
    while(n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    if(sum == x)
    {
        printf("The number is an Armstrong number.");
    }
    else
    {
        printf("The number is not an Armstrong number.");
    }
    return 0;
}
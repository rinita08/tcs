#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int x=n;
    for(int i=1; i<n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    if(sum == x)
    {
        printf("%d is a perfect number.", x);
    }
    else
    {
        printf("%d is not a perfect number.", x);
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n, square;
    printf("Enter a number: ");
    scanf("%d", &n);
    square = n * n;
    int x=n;
    int divisor = 1;
    while (x > 0) {
        divisor=divisor*10;
        x /= 10;
    }
    if (square%divisor == n) {
        printf("%d is an automorphic number.\n", n);
    } else {
        printf("%d is not an automorphic number.\n", n);
    }
    return 0;
}
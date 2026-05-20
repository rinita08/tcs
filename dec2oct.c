#include <stdio.h>

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
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    int digits[] = {0, 1, 2, 3, 4, 5, 6, 7};
    printf("Octal equivalent: ");
    tobase(n, 8, digits);
    printf("\n");
    return 0;
}

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int c1 = (n - 1) / 2;
    int c2 = 3 * n / 2 - 1;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i + j == c1 || i - j == c1 || j - i == c1 || i + j == c2 || i == c1 || j == c1)
            {
                printf("* ");
            }
           else
           {
            printf("  ");
           }
        }
        printf("\n");
    }
    return 0;
}
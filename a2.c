#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n-1; i >= 0; i--) 
    {
        for(j = 0; j <= i; j++)
        {
            printf("%c", 'A' + i );
        }
        printf("\n");
    }
    return 0;
}
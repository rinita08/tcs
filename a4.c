#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n-1; i >= 0; i--) 
    {
        for(j=i;j<=n-1;j++)
        {
            printf("%c", 'A'+j);
        }
        printf("\n");
    }
    return 0;
}
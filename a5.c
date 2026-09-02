#include <stdio.h>
int main()
{
    int i, j, n ;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 0; i <= n-1; i++) 
    {
        for(j=n;j>i;j--)
        {
            printf("%c", 'A'+i);
        }
        printf("\n");
    }
    return 0;
}
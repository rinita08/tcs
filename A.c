#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n/2;j++)
        {
            if(i==0 || j==0 || i==n/2 || j==n/2)
            {
                if(i==0 && (j==0 || j==n/2))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
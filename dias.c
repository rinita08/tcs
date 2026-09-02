#include<stdio.h>

int main()
{
    int i,j,k,n,l;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            k=i+1;
        }
        else
        {
            k=i;
        }
        for(l=n;l>=k;l--)
        {
            printf(" ");
        }
        for(j=1;j<=k;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int i,j,k,l,b;
    printf("Enter the number of length: ");
    scanf("%d",&l);
    printf("Enter the number of breadth: ");
    scanf("%d",&b);
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=b;j++)
        {
            if(i==1 || j==1 || i==l || j==b)
            {
                printf("*");
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
// Input: 7
// Output:
// 1 
// 8 2 
// 14 9 3 
// 19 15 10 4 
// 23 20 16 11 5 
// 26 24 21 17 12 6 
// 28 27 25 22 18 13 7

#include<stdio.h>

int main()
{
    int i,j,k=1,n,p;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=k;
        for(j=1;j<=i;j++)
        {
            printf("%d ",p);
            p=p-n-j+i;
        }
        k=k+n-i+1;
        printf("\n");
    }
    return 0;
}
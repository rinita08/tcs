//     1
//    232
//   34543
//  4567654
// 567898765

#include<stdio.h>

int main()
{
    int i,j,k,n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=i;k<=2*i-1;k++)
        {
            printf("%d",k);
        }
        m=k;
        for(k=m-2;k>=i;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
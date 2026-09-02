//          1 
//         1 2 
//        1 2 3 
//       1 2 3 4 
//      1 2 3 4 5 
//     1 2 3 4 5 6 
//    1 2 3 4 5 6 7 
//   1 2 3 4 5 6 7 8 
//  1 2 3 4 5 6 7 8 9 
// 1 2 3 4 5 6 7 8 9 10 

#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}
// Input : n = 5
// Output : 

//     E
//    D D
//   C   C
//  B     B
// A       A

// Input : n = 5
// Output : 

// E       E
//  D     D
//   C   C
//    B B
//     A


#include<stdio.h>

int main()
{
    int i,j,k,n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            printf("|");
        }
        for(k=n-i-1;k<=2*i-1;k++)
        {
            if(k==n-i-1 || k== 2*i-1)
            {
                printf("%c",'A'+k);
            }
            else
            {
                printf("|");
            }
        }
        printf("\n");
    }
    return 0;
}
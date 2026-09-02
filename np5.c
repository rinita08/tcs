// Input : n = 4
// Output : 
// 1
// 3*2
// 4*5*6
// 10*9*8*7

// Input : n = 5
// Output :
// 1
// 3*2
// 4*5*6
// 10*9*8*7
// 11*12*13*14*15

#include<stdio.h>

int main()
{
    int i,j,k=0,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=k+1;j<k+i;j++)
            {
                printf("%d*",j);
            }
            printf("%d\n",j);
            k=j+1;
        }
        else
        {
            k=k+i-1;
            for (j=k; j>k-i+1; j--)
            {
                printf("%d*",j);
            }
            printf("%d\n",j);
        }
    }
    return 0;
}
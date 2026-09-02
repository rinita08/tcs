// Input : n = 5
// Output :

//  ABCDEDCBA
//  ABCD DCBA
//  ABC   CBA
//  AB     BA
//  A       A


// Input : n = 8
// Output :

// ABCDEFGHGFEDCBA
// ABCDEFG GFEDCBA
// ABCDEF   FEDCBA
// ABCDE     EDCBA
// ABCD       DCBA
// ABC         CBA
// AB           BA
// A             A

#include<stdio.h>

int main()
{
    int i,j,k,n,start;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("%c", 'A'+j);
        }
        for(k=0;k<2*i-1;k++)
        {
            printf(" ");
        }
        start = n-1-i;
        if(i==0) 
        {
            start = n-2;
        }
        for(j=start;j>=0;j--)
        {
            printf("%c", 'A'+j);
        }
        printf("\n");
    }
    return 0;
}
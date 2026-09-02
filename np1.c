// Input : 8
// Output : 
// 7 6 5 4 3 2 1 0 
// 6 5 4 3 2 1 0   
// 5 4 3 2 1 0     
// 4 3 2 1 0       
// 3 2 1 0         
// 2 1 0           
// 1 0             
// 0  

#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        for(j=i;j>=0;j--)
        {
            printf("%d",j);
        }   
        printf("\n");
    }
    return 0;
}
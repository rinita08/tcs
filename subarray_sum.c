#include<stdio.h>
int main()
{
    int n,sum=0,max=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int from_index=0,to_index=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum>max)
        {
            max=sum;
            to_index=i;
        }
        if(sum<0)
        {
            sum=0;
            from_index=i+1;
        } 
    }
    for(int i=from_index;i<=to_index;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n%d", max);
    return 0;
}
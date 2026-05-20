#include<stdio.h>

int partition(int a[],int lb,int ub)
{
    int pivot=a[ub];
    int left=lb;
    int right=ub-1;
    int temp;
    while(left<=right)
    {
        while(left<=right && a[left]<=pivot)
        {
            left++;
        }
        while(left<=right && a[right]>pivot)
        {
            right--;
        }
        if(left<right)
        {
            temp=a[left];
            a[left]=a[right];
            a[right]=temp;
        }
    }
    temp=a[ub];
    a[ub]=a[left];
    a[left]=temp;
    printf("%d\n", left);
    return left;
}

int quicksort(int a[],int lb, int ub)
{
    if(lb<ub)
    {
        int loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
    return 0;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
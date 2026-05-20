#include<stdio.h>

int partition(int a[],int lb, int ub)
{
    int pivot=a[lb];
    int left=lb;
    int right=ub;
    int temp;
    while(left<right)
    {
        while(a[left]<=pivot)
        {
            left++;
        }
        while(a[right]>pivot)
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
    temp=a[lb]; 
    a[lb]=a[right];
    a[right]=temp;
    return right;
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
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
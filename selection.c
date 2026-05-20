#include<stdio.h>

void selectionsort(int x[],int y)
{
	int i,j,min,t;
	for(i=0;i<y;i++)
	{
		min=i;
		for(j=i+1;j<y;j++)
		{
			if(x[j]<x[min])
			min=j;
		}
		if(min!=i)
		{
			t=x[i];
			x[i]=x[min];
			x[min]=t;
		}
	}
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
    selectionsort(a,n);
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
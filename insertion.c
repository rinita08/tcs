#include<stdio.h>

void insertionsort(int x[],int y)
{
	int i,j,t;
	for(i=1;i<y;i++)
	{
		t=x[i];
		j=i-1;
		while(j>=0 && t<x[j])
		{
			x[j+1]=x[j];
			j--;
		}
		x[j+1]=t;
	}
}

int main()
{
    int i,n,a[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertionsort(a,n);
    printf("Sorted array is:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
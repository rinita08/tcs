#include<stdio.h>

void merge(int x[],int p,int q,int r)
{
	int i,j,k;
	int n1=q-p+1;
	int n2=r-q;
	int L[n1],M[n2];
	for(i=0;i<n1;i++)
	L[i]=x[p+i];
	for(j=0;j<n2;j++)
	M[j]=x[q+1+j];
	i=0;
	j=0;
	k=p;
	while(i<n1 && j<n2)
    {
    	if(L[i]<=M[j])
    	{
    		x[k]=L[i];
    		i++;
		}
		else
		{
			x[k]=M[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		x[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		x[k]=M[j];
		j++;
		k++;
	}
}

void mergesort(int x[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=lb+(ub-lb)/2;
		mergesort(x,lb,mid);
		mergesort(x,mid+1,ub);
		merge(x,lb,mid,ub);
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
    mergesort(a,0,n-1);
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}